#include <iostream>
using namespace std;

void dTB(int n){
	int binary[32];
	int i = 0;
	int j = i - 1;
	while(n > 0){
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	for(j = i - 1; j >= 0; j--){
		cout << binary[j];
		if(j % 4 == 0 && j != 0){
			cout << " ";
		}
	}
}