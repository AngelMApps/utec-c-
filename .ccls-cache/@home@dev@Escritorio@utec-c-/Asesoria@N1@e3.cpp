#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "";

    cout<<"ingrese una palabra: ";
    getline(cin, word, '\n');
    
    cout<<word<<endl;

    for (auto letra : word){
        if (letra ==' '){
        }
    }


    return 0;
}
