#include <iostream>
#include <map>
using namespace std;
int main(){
    int vertices=0,x=0,y=0;
    do
    {
        cout<<"Numero de vertices: ";
        cin>>vertices;
    } while (vertices<3||vertices>10);
    for (int i = 1; i <= vertices; i++){
        cout<<"vertices num "<<i<<":\n";
        cout<<"X = ";
        cin>>x;
        cout<<"Y = ";
        cin>>y;
    }
    
    return 0;
}
