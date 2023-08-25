#include <ios>
#include <iostream>
using namespace std;

void decimalToHexadecimal(int n){
	int remainder, product = 1;
	string hexadecimal = "";
	char ch;
	while(n != 0){
		remainder = n % 16;
		if(remainder >= 10){
			ch = remainder + 55;
		}
		else{
			ch = remainder +48;
		}
		hexadecimal += ch;

		n /= 16;
		product *= 10;
	}
	reverse(hexadecimal.begin(), hexadecimal.end());
	cout << hexadecimal;
}
