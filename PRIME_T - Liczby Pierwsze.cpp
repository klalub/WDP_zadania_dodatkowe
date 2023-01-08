#include <iostream>
using namespace std;

bool czyPierwsza(unsigned int n)
{
	if (n < 2)
		return false;

	for (unsigned int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	unsigned int liczba;
	int przebieg;
	cout << "podaj ile liczb chcesz sprawdzic czy sa liczbami pierwszymi: ";
	cin >> przebieg;
	cout << endl;
	for (int i = 0; i<przebieg; i++)
	{
		cout << "podaj liczbe: ";
		cin >> liczba;
		cout << endl;

		if (czyPierwsza(liczba) == true)
			cout << "TAK"<<endl;
		else
			cout << "NIE"<<endl;
	}
}
