# Quantum Well Calculator (CdTe/CdMgTe)

## Overview
This program calculates bound states in a CdTe/CdMgTe quantum well. It uses a naive approach by solving the finite potential well problem with the **bisection method**. Effects such as Stokes shift, phonon interactions, and excitonic state energies are **not** considered.

## History
The first version of this program was written in 2011, when I was a physics student beginning my journey in solid-state physics. The original program ran in a Linux terminal, asking the user questions, and did **not** include calculation of effective mass or energy gap based on magnesium content.

Over the years, I added these features:  
- **Energy gap (Eg):** calculated based on magnesium content using the relation from [DOI: 10.1007/s11664-017-5589-3](https://doi.org/10.1007/s11664-017-5589-3).  
- **Effective mass:** assumed a linear dependence \( m^* = 0.2*x + (1.0-x)*0.1 \), where `x` is the magnesium content in the barrier.

I decided to refresh the program to practice writing a GUI using the **Qt framework**.

## Features
- Qt6 GUI with interactive input fields.
- Bisection method for calculating bound states.
- Automatic computation of energy gap and effective mass based on Mg content.
- Displays electron, hole, and total energies in LCD displays.

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/Piotr-Drozdz/Quantum-well-calculator.git
   cd QuantumWellCalculator
