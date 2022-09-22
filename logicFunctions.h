# include <iostream>
using namespace std;

bool andGate(bool x, bool y){
    return x && y;
}

bool orGate(bool x, bool y){
	return x || y;
}

bool xorGate(bool x, bool y){
    return x ^ y;
}

bool nandGate(bool x, bool y){
    return !(x && y);
}

bool norGate(bool x, bool y){
	return !(x || y);
}

bool notGate(bool x){
    return !x;
}