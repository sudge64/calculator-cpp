/*
 * Author: CJ Wade
 * 
 * Purpose: Printing 2 input Boolean algebraic operation truth tables
*/

# include <iostream>
using namespace std;

void andGate(){
	cout << "\n--AND Truth Table--" << endl;
	cout << "| x |" << " y |" << " AND     |" << endl;
    cout << "-------------------" << endl;
	cout << "| 0 |" << " 0 |" << " " << (false && false) << "       |" << endl;
	cout << "| 0 |" << " 1 |" << " " << (false && true) << "       |" << endl;
	cout << "| 1 |" << " 0 |" << " " << (true && false) << "       |" << endl;
	cout << "| 1 |" << " 1 |" << " " << (true && true) << "       |" << endl;
    cout << "-------------------" << endl;
}

void orGate(){
    cout << "\n---OR Truth Table--" << endl;
	cout << "| x |" << " y |" << " OR      |" << endl;
    cout << "-------------------" << endl;
	cout << "| 0 |" << " 0 |" << " " << (false || false) << "       |" << endl;
	cout << "| 0 |" << " 1 |" << " " << (false || true) << "       |" << endl;
	cout << "| 1 |" << " 0 |" << " " << (true || false) << "       |" << endl;
	cout << "| 1 |" << " 1 |" << " " << (true || true) << "       |" << endl;
    cout << "-------------------" << endl;
}

void xorGate(){
    cout << "\n--XOR Truth Table--" << endl;
	cout << "| x |" << " y |" << " XOR     |" << endl;
    cout << "-------------------" << endl;
	cout << "| 0 |" << " 0 |" << " " << (false ^ false) << "       |" << endl;
	cout << "| 0 |" << " 1 |" << " " << (false ^ true) << "       |" << endl;
	cout << "| 1 |" << " 0 |" << " " << (true ^ false) << "       |" << endl;
	cout << "| 1 |" << " 1 |" << " " << (true ^ true) << "       |" << endl;
    cout << "-------------------" << endl;
}

void nandGate(){
    cout << "\n-NAND Truth Table--" << endl;
	cout << "| x |" << " y |" << " NAND    |" << endl;
    cout << "-------------------" << endl;
	cout << "| 0 |" << " 0 |" << " " << !(false && false) << "       |" << endl;
	cout << "| 0 |" << " 1 |" << " " << !(false && true) << "       |" << endl;
	cout << "| 1 |" << " 0 |" << " " << !(true && false) << "       |" << endl;
	cout << "| 1 |" << " 1 |" << " " << !(true && true) << "       |" << endl;
    cout << "-------------------" << endl;
}

void norGate(){
    cout << "\n--NOR Truth Table--" << endl;
	cout << "| x |" << " y |" << " NOR     |" << endl;
    cout << "-------------------" << endl;
	cout << "| 0 |" << " 0 |" << " " << !(false || false) << "       |" << endl;
	cout << "| 0 |" << " 1 |" << " " << !(false || true) << "       |" << endl;
	cout << "| 1 |" << " 0 |" << " " << !(true || false) << "       |" << endl;
	cout << "| 1 |" << " 1 |" << " " << !(true || true) << "       |" << endl;
    cout << "-------------------" << endl;
}

void notGate(){
	cout << "\n--NOT Truth Table--" << endl;
	cout << "| x |" << " NOT         |" << endl;
    cout << "-------------------" << endl;
	cout << "| 0 | " << !false << "           |" << endl;
	cout << "| 1 | " << !true << "           |" << endl;
    cout << "-------------------" << endl;
}