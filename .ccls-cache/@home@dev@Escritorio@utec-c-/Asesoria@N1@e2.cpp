#include <iostream>
#include <string>
using namespace std;

int main(){
    string password="";
    string confirm_password="";
    int intentos=3;

    cout<< "ingrese su clave: ";
    cin>>password;
    do{
        cout<< "confirme su clave: ";
        cin>>confirm_password;

        if (confirm_password==password){
            cout<< "Password Confirmado\n";
            break;
        }
        intentos--;
        cout<<"clave incorrecta! Le quedan "<<intentos<<" intentos\n";
    }while(intentos);
    return 0;
}
