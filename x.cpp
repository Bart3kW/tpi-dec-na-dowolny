#include<iostream>
#include <string>

using namespace std;

int main()
{
    char tab[]= {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int liczba, p;
    string x;
    cin >> liczba;
    cin >> p;

    while(liczba > 0)
    {
        x = tab[liczba % p] + x;
        liczba = liczba / p;
    }

    cout << x << endl;
    return 0;
}
