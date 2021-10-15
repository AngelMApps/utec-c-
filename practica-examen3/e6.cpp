#include <iostream>
//#include <algorithm>
using namespace std;

bool esCapicua(int n)
{
    string nT = to_string(n), reverse = "";
    int len = nT.size();
    if ((len == 2 || len == 3)&& (nT[0]== nT[len-1]))
    {
        return 1;
    }
    else if (len > 3)
    {
        for (int i = len - 1; i >= 0; i--)
        {
            reverse += nT[i];
        }
        //reverse(nT.begin(),nT.end());
        if (reverse == nT){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int main()
{
    int number = 0;
    do
    {
        cout << "Numero>10: ";
        cin >> number;
    } while (number < 11);
    for (int i = 11; i <= number; i++)
    {
        if (esCapicua(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}