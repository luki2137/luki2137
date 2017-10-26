#include <iostream>
using namespace std;
/*int main()
{
	float tab[6];
	float suma=0;
	for (int i = 0;i < 6;i++) {
	cout << "Wpisz liczbe: ";
	cin >> tab[i];
	suma = suma + tab[i];
	}
	for (int i = 0;i < 6;i++) {
	cout << "Element " << i << "wynosi " << tab[i] << endl;
	}
	cout << "Srednia: " << suma / 6;
	getchar();
	getchar();
	return 0;
}*/

int main()
{
	int n;
	cin >> n;
	int fib[50];
	fib[0] = 1;
	fib[1] = 1;
	for (int i=2;i < n;i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (int i=0;i < n;i++) {
		cout << "Wynosi: " << fib[i];
	}
	getchar();
	getchar();
	return 0;
}
