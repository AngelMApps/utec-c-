#include <iostream>
using namespace std;

char nMayor(string texto)
{
    int temp = -1;
    for (auto i : texto)
    {
        if (temp < i)
            temp = i;
    }
    return temp;
}
int sumIncremento(char n, string ns)
{
    int max = n - '0', res = 0;
    for (auto i : ns)
    {
        i -= '0';
        res += max - i;
    }
    return res;
}

int main()
{
    string numbers = "";
    char numMayor = ' ';
    cin >> numbers;
    numMayor = nMayor(numbers);
    cout << sumIncremento(numMayor, numbers) << endl;
    return 0;
}
