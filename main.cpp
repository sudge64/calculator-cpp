#include <iostream>
#include "standardFunctions.h"
#include "logicFunctions.h"
using namespace std;

void getNumbers(double &x, double &y)
{
    cout << "\nEnter X: ";
    cin >> x;
    cout << "\nEnter Y: ";
    cin >> y;
}

void getBoolean(bool &x, bool &y)
{
    cout << "\nEnter X: ";
    cin >> x;
    cout << "\nEnter Y: ";
    cin >> y;
}

void logicMenu(bool boolX, bool boolY, int w)
{
    while (w != 7)
    {
        cout << "\n---------Logic--------\n| 1.) AND            |\n| 2.) OR             |\n| 3.) NOT            |\n| 4.) NAND           |\n| 5.) NOR            |\n| 6.) XOR            |\n| 7.) Exit Sub Menu  |\n| 8.) Exit Program   | " << "\n----------------------" << endl;
        cout << "\nEnter your choice: ";
        cin >> w;

        switch (w)
        {
        case 1:
        { // AND
            getBoolean(boolX, boolY);
            // getNumbers(x, y);
            cout << "\nResult: " << andGate(boolX, boolY) << endl;
            // cout << "\nResult: " << andGate(x, y) << endl;
            break;
        }
        case 2:
        { // OR
            getBoolean(boolX, boolY);
            cout << "\nResult: " << orGate(boolX, boolY) << endl;
            break;
        }
        case 3:
        { // NOT
            getBoolean(boolX, boolY);
            cout << "\nResult: " << notGate(boolX) << endl;
            break;
        }
        case 4:
        { // NAND
            getBoolean(boolX, boolY);
            cout << "\nResult: " << nandGate(boolX, boolY) << endl;
            break;
        }
        case 5:
        { // NOR
            getBoolean(boolX, boolY);
            cout << "\nResult: " << norGate(boolX, boolY) << endl;
            break;
        }
        case 6:
        { // XOR
            getBoolean(boolX, boolY);
            cout << "\nResult: " << xorGate(boolX, boolY) << endl;
            break;
        }
        case 7:
        { // Exit logic
            cout << "\nExiting Logic Sub Menu..." << endl
                 << endl;
            // exit(0);
            break;
        }
        case 8:
        { // Exit program
            cout << "\nExiting program..." << endl
                 << endl;
            exit(0);
            break;
        }
        default:
        { // Default behavior
            cout << "\nERROR: Invalid entry." << endl
                 << endl;
            break;
        }
        }
    }
}

int main()
{
    double x = 0, y = 0;
    bool boolX = false, boolY = false;
    int z = 0, w = 0;

    while (z != 7)
    {
        cout << "\n---------Menu---------\n| 1.) Addition       |\n| 2.) Subtraction    |\n| 3.) Multiply       |\n| 4.) Division       |\n| 5.) Modulo         |\n| 6.) Logic Sub Menu |\n| 7.) Exit           | "
             << "\n----------------------" << endl;
        cout << "\nEnter your choice: ";
        cin >> z;

        switch (z)
        {
        case 1:
        { // Addition
            getNumbers(x, y);
            cout << "\nResult: " << add(x, y) << endl;
            break;
        }
        case 2:
        { // Subtraction
            getNumbers(x, y);
            cout << "\nResult: " << sub(x, y) << endl;
            break;
        }
        case 3:
        { // Multiplication
            getNumbers(x, y);
            cout << "\nResult: " << mul(x, y) << endl;
            break;
        }
        case 4:
        { // Division
            getNumbers(x, y);
            cout << "\nResult: " << division(x, y) << endl;
            break;
        }
        case 5:
        { // Modulo
            getNumbers(x, y);
            cout << "\nResult: " << modulo(x, y) << endl;
            break;
        }
        case 6:
        { // Logic Submenu
            logicMenu(boolX, boolY, w);
            break;
        }
        case 7:
        { // Exit program
            cout << "\nExiting program..." << endl
                 << endl;
            exit(0);
            break;
        }
        default:
        { // Default behavior
            cout << "\nERROR: Invalid entry." << endl
                 << endl;
            break;
        }
        }
    }

    return 0;
}