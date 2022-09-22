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