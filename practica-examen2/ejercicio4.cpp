#include <iostream>
using namespace std;
void createNumber(string number){
    for (char n: number){
        switch (n) {
            case '0':
                cout << "***" << std::endl;
                cout << "* *" << std::endl;
                cout << "* *" << std::endl;
                cout << "***" << std::endl;
                cout << " " << std::endl;
                break;
            case '1':
                cout << "*" << std::endl;
                cout << "*" << std::endl;
                cout << "*" << std::endl;
                cout << "*" << std::endl;
                cout << " " << std::endl;
                break;
            case '2':
                cout << "***" << std::endl;
                cout << "  *" << std::endl;
                cout << "***" << std::endl;
                cout << "*  " << std::endl;
                cout << "*  " << std::endl;
                cout << "***" <<endl;
                cout << " " << std::endl;
                break;
            case '3':
                cout << "***" << std::endl;
                cout << "  *" << std::endl;
                cout << "***" << std::endl;
                cout << "  *" << std::endl;
                cout << "***" << std::endl;
                cout << " " << std::endl;
                break;
            case '4':
                cout << "* *" << std::endl;
                cout << "* *" << std::endl;
                cout << "***" << std::endl;
                cout << "  *" << std::endl;
                cout << "  *" << std::endl;
                cout << " " << std::endl;
                break;
            case '5':
                cout << "***" << std::endl;
                cout << "*  " << std::endl;
                cout << "***" << std::endl;
                cout << "  *" << std::endl;
                cout << "***" << std::endl;
                cout << " " << std::endl;
                break;
            case '6':
                cout<<"***"<<std::endl;
                cout<<"*  "<<std::endl;
                cout<<"***"<<std::endl;
                cout<<"* *"<<std::endl;
                cout<<"***"<<std::endl;
                cout<<" "<<std::endl;
                break;
            case '7':
                cout<<"***"<<std::endl;
                cout<<"  *"<<std::endl;
                cout<<" * "<<std::endl;
                cout<<"*  "<<std::endl;
                cout<<"*  "<<std::endl;
                cout<<" "<<std::endl;
                break;
            case '8':
                cout<<"***"<<std::endl;
                cout<<"* *"<<std::endl;
                cout<<"***"<<std::endl;
                cout<<"* *"<<std::endl;
                cout<<"***"<<std::endl;
                cout<<" "<<std::endl;
                break;
            case '9':
                cout<<"***"<<std::endl;
                cout<<"* *"<<std::endl;
                cout<<"***"<<std::endl;
                cout<<"  *"<<std::endl;
                cout<<"***"<<std::endl;
                cout<<" "<<std::endl;
                break;
            case '.':
                cout<<"**"<<std::endl;
                cout<<"**"<<std::endl;
                cout<<" "<<std::endl;
                break;
        }
    }
}
int main(){
    string number="";
    cin>>number;
    createNumber(number);
    return 0;
}

