#include <iostream>
using namespace std;

int potegowanie(int podstawa, int wykladnik)
{
    if (wykladnik == 0)
        return wykladnik = 1;
    else
       return podstawa * potegowanie(podstawa, wykladnik - 1);
}

int main()
{
    int podstawa, wykladnik;
    cout << "podaj podstawe potegi ";
    cin >> podstawa;
    cout << "\npodaj wykladnik potegi ";
    cin >> wykladnik;
    cout << "\nWynik wynosi: ";
    cout<<potegowanie(podstawa, wykladnik);
}
