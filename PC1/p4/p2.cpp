//
// Created by dev on 5/10/21.
//
#include <iostream>
#include "p2.h"
using namespace std;
void binario(int n) {
    if(n>1) binario(n/2);
    cout<<n%2;
}
