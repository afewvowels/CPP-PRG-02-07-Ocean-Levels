//
//  main.cpp
//  PRG-2-7-Ocean-Levels
//
//  Created by Keith Smith on 10/5/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a program that displays:
//  1. The number of millimeters higher than the current level that the ocean's level will be in 5 years.
//  2. The number of millimeters higher than the current level that the ocean's level will be in 7 years.
//  3. The number of millimeters higher than the current level that the ocean's level will be in 10 years.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Declare constant
    const float FLT_ANNUAL_INCREASE = 1.5f;
    
    // Declare variables
    float fltYears5;
    float fltYears7;
    float fltYears10;
    
    // Calculate total ocean level rise for 5, 7, and 10 years
    fltYears5 = FLT_ANNUAL_INCREASE * 5.0f;
    fltYears7 = FLT_ANNUAL_INCREASE * 7.0f;
    fltYears10 = FLT_ANNUAL_INCREASE * 10.0f;
    
    // Configure output for single decimal precision
    cout << setprecision(1) << fixed << showpoint;
    
    // Display results
    cout << "Ocean level rise after 5 years: " << fltYears5 << " millimeters\n";
    cout << "Ocean level rise after 7 years: " << fltYears7 << " millimeters\n";
    cout << "Ocean level rise after 10 years: " << fltYears10 << " millimeters\n";
    
    return 0;
}
