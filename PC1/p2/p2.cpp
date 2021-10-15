//
// Created by dev on 5/10/21.
//

#include <iostream>
#include "p2.h"
using namespace std;
string binario(int n) {
    char number=' '
    if(n>1) {
        binario(n/2);
        binary += n/2;
    }
    string binary = to_string(number);
    return binary;
}
