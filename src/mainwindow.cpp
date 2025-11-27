#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bisekcja.h"
#include "studnia.h"

#include <cmath>
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent), ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	// connect button signal to slot
	connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onCalculateClicked);
}

MainWindow::~MainWindow()
{
	delete ui;
}

// slot executed when Calculate button is clicked
void MainWindow::onCalculateClicked()
{
	double E1, E2, a, Ve, Vh, prc1, prc2;
	int VBOe, VBOh, n;//n is the number of state in QW, the rest one can guess by looking at calculations below
	VBOe = 7;
	VBOh = 3;
    // Read values from GUI
	prc1 = ui->doubleSpinBox->value();
	prc2 = ui->doubleSpinBox_2->value();
	a = ui->doubleSpinBox_3->value();
	n = 1;


	//Core Calculations
	double me = 511000;
	double ke, kh, Ee, Eh, Etot, h;
	double Re, Rh;
	E2=EgMg(prc2);
	E1=EgMg(prc1);

	h = 197.32696817;

	Ve = VBOe*dV(E1, E2, VBOe, VBOh);
	Vh = VBOh*dV(E1, E2, VBOe, VBOh);
	
	Re = sqrt((2*0.067*me*Ve)/(h*h));
	Rh = sqrt((2*0.45*me*Vh)/(h*h));
	double me_eff = mel(prc2);
	double mh_eff = meh(prc2);
	
	
	ke = stan(n, Re, a);
	
	Ee = (ke*ke*h*h)/(2*me_eff*me);
	
	
	kh = stan(n, Rh, a);
	Eh = (kh*kh*h*h)/(2*mh_eff*me);
	
	Etot = Ee + Eh + E2;
	// Display results in LCD widgets
	ui->lcdNumber_2->display(Ee);
	ui->lcdNumber->display(Eh);
	ui->lcdNumber_3->display(E2);
	ui->lcdNumber_4->display(Etot);
}

