#include <iostream>

using namespace std;

int main()
{
    int *p = new int[5];
    for (size_t i = 0; i < 5; i++)
        p[i] = i * 10;
    
    for (size_t i = 0; i < 5; i++)
        cout<<p[i]<<" ";
    cout<<endl;
    //--- Si ya no se va a utilizar se libera la memoria
    cout<<p<<endl;
    delete[] p;
    p=nullptr;
    cout<<p<<endl;
    return 0;
}