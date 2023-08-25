/*
 * Author: CJ Wade
 * 
 * Purpose: Mathematical Operations
*/

#include <iostream>
#include "standardFunctions.h"
#include "logicFunctions.h"
#include "logicTruthTables.h"
#include "binaryFunctions.h"
#include "hexadecimalFunctions.h"
using namespace std;

// Function for reading decimal numbers.
void getNumbers(double &x, double &y)
{
    cout << "\nEnter X: ";
    cin >> x;
    cout << "\nEnter Y: ";
    cin >> y;
}

// Function for reading boolean values.
void getBoolean(bool &x, bool &y)
{
    cout << "\nEnter X: ";
    cin >> x;
    cout << "\nEnter Y: ";
    cin >> y;
}

// Function for sub menu for logic operations
void logicMenu(bool boolX, bool boolY, int w)
{
    while (w != 9)
    {
        cout << "\n---------Logic--------\n| 1.) AND            |\n| 2.) OR             |\n| 3.) NOT            |\n| 4.) NAND           |\n| 5.) NOR            |\n| 6.) XOR            |\n| 7.) Truth Tables   |\n| 8.) Exit Sub Menu  |\n| 9.) Exit Program   | " << "\n----------------------" << endl; // Print logic sub menu
        cout << "\nEnter your choice: "; // Prompt user for data
        cin >> w; // Reader user data

        switch (w) // Logic sub menu
        {
        case 1: // AND
        {
            getBoolean(boolX, boolY);
            cout << "\nResult: " << andLogic(boolX, boolY) << endl;
            break;
        }
        case 2: // OR
        {
            getBoolean(boolX, boolY);
            cout << "\nResult: " << orLogic(boolX, boolY) << endl;
            break;
        }
        case 3: // NOT
        {
            getBoolean(boolX, boolY);
            cout << "\nResult: " << notLogic(boolX) << endl;
            break;
        }
        case 4: // NAND
        {
            getBoolean(boolX, boolY);
            cout << "\nResult: " << nandLogic(boolX, boolY) << endl;
            break;
        }
        case 5: // NOR
        {
            getBoolean(boolX, boolY);
            cout << "\nResult: " << norLogic(boolX, boolY) << endl;
            break;
        }
        case 6: // XOR
        {
            getBoolean(boolX, boolY);
            cout << "\nResult: " << xorLogic(boolX, boolY) << endl;
            break;
        }
        case 7:{ // Print truth tables
            cout << endl; 
            andGate();
            orGate();
            notGate();
            nandGate();
            norGate();
            xorGate();
            break;
        }
        case 8: // Exit logic sub menu
        {
            cout << "\nExiting Logic Sub Menu..." << endl << endl;
            w = 9;
            break;
        }
        case 9: // Exit program
        {
            cout << "\nExiting program..." << endl << endl;
            exit(0);
            break;
        }
        default: // Default behavior
        {
            cout << "\nERROR: Invalid entry." << endl << endl;
            break;
        }
        }
    }
}

// Main Function
int main()
{
    double x = 0, // First value for math operations, initalize with 0 for insurance
    y = 0; // Second value for math operations, initalize with 0 for insurance

    bool boolX = false, // First value for logic operations, initalize with `false` for insurance
    boolY = false; // Second value for logic operations, initalize with `false` for insurance
    
    int z = 0, // First value for switch statement control, initalize with 0 for insurance
    w = 0; // Second value for switch statement control, initalize with 0 for insurance

    while (z != 9)
    {
        cout << "\n-------------Menu-------------\n| 1.) Addition               |\n| 2.) Subtraction            |\n| 3.) Multiply               |\n| 4.) Division               |\n| 5.) Modulo                 |\n| 6.) Logic Sub Menu         |\n| 7.) Binary Conversion      |\n| 8.) Hexadecimal Conversion |\n| 9.) Exit                   | "
             << "\n------------------------------" << endl; // Print menu
        cout << "\nEnter your choice: "; // Prompt user for data
        cin >> z; // Read user data

        switch (z) // Main menu
        {
        case 1: // Addition
        {
            getNumbers(x, y);
            cout << "\nResult: " << add(x, y) << endl;
            break;
        }
        case 2: // Subtraction
        {
            getNumbers(x, y);
            cout << "\nResult: " << sub(x, y) << endl;
            break;
        }
        case 3: // Multiplication
        {
            getNumbers(x, y);
            cout << "\nResult: " << mul(x, y) << endl;
            break;
        }
        case 4: // Division
        {
            getNumbers(x, y);
            cout << "\nResult: " << division(x, y) << endl;
            break;
        }
        case 5: // Modulo
        {
            getNumbers(x, y);
            cout << "\nResult: " << modulo(x, y) << endl;
            break;
        }
        case 6: // Logic Sub menu
        {
            logicMenu(boolX, boolY, w);
            break;
        }
        case 7: // Binary Conversion
        {
	    cout << "\nEnter X: ";
            cin >> x;
            cout << "\nResult: ";
            decimalToBinary(x);
            cout << endl;
            break;
        }
        case 8: // Hexadecimal Conversion
        {
            cout << "\nEnter X: ";
            cin >> x;
            cout << "\nResult: ";
            decimalToHexadecimal(x);
            cout << endl;
            break;
        }
        case 9: // Exit program
        {
            cout << "\nExiting program..." << endl
                 << endl;
            exit(0);
            break;
        }
        default: // Default behavior
        {
            cout << "\nERROR: Invalid entry." << endl
                 << endl;
            break;
        }
        }
    }

    return 0;
}
