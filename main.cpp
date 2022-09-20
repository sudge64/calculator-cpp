#include <iostream>
using namespace std;

double add(double x, double y){
    return x + y;
}

double sub(double x, double y){
    return x - y;
}

double mul(double x, double y){
    return x * y;
}

double division(double x, double y){
    if(y == 0){
        cout << "ERROR: Division by Zero." << endl;
        return 0;
    }
    return x / y;
}

int modulo(int x, int y){
    if(y == 0){
        cout << "ERROR: Division by Zero." << endl;
        return 0;
    }
    return x % y;
}

void getNumbers(double &x, double &y){
    cout << "\nEnter X: ";
    cin >> x;
    cout << "\nEnter Y: ";
    cin >> y;
}

int main(){
    double x = 0, y = 0;
    int z = 0;

    while(z != 6){
        cout << "\n--------Menu--------\n| 1.) Addition     |\n| 2.) Subtraction  |\n| 3.) Multiply     |\n| 4.) Division     |\n| 5.) Modulo       |\n| 6.) Exit         | " << "\n--------------------" << endl;
        cout << "\nEnter your choice: ";
        cin >> z;


        switch (z)
        {
            case 1:{
                getNumbers(x, y);
                cout << "\nResult: " << add(x, y) << endl;
                break;
            }
            case 2:{
                getNumbers(x, y);
                cout << "\nResult: " << sub(x, y) << endl;
                break;
            }
            case 3:{
                getNumbers(x, y);
                cout << "\nResult: " << mul(x, y) << endl;
                break;
            }
            case 4:{
                getNumbers(x, y);
                cout << "\nResult: " << division(x, y) << endl;
                break;
            }
            case 5:{
                getNumbers(x, y);
                cout << "\nResult: " << modulo(x, y) << endl;
                break;
            }
            case 6:{
                cout << "\nExiting program..." << endl << endl;
                exit(0);
                break;
            }
            default:{
                cout << "\nERROR: Invalid entry." << endl << endl;
                break;
            }
        }
    }

    return 0;
}