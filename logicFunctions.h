/*
 * Author: CJ Wade
 * 
 * Purpose: Boolean logic operations
*/

# include <iostream>
using namespace std;

bool andLogic(bool x, bool y){
    return x && y;
}

bool orLogic(bool x, bool y){
	return x || y;
}

bool xorLogic(bool x, bool y){
    return x ^ y;
}

bool nandLogic(bool x, bool y){
    return !(x && y);
}

bool norLogic(bool x, bool y){
	return !(x || y);
}

bool notLogic(bool x){
    return !x;
}