#include <iostream>
using namespace std;

void convert(unsigned long int seg, unsigned int &hh, unsigned int &mm, unsigned int &ss){ 
    hh= seg/3600;
    seg =seg%3600;
    mm=seg/60;
    ss=seg%60;
}

int main(){
    unsigned int horas=0,mins=0,segs=0;
    cout<<"antes de CONVERT "<<horas<<"-"<<mins<<"-"<<segs<<endl;
    convert(3850, horas, mins, segs);
    cout<<"despues de CONVERT "<<horas<<"-"<<mins<<"-"<<segs<<endl;
    return 0;
}
