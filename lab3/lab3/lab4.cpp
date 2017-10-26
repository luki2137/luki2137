#include <iostream>
using namespace std;

int main();
{
	int n;
	cin >> n;
	int fib[50];
	fib[0] = 1;
	fib[1] = 1;
	for (int = 2;i < n;i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (int = 0;i < n;i++) {
		cout << "Wynosi: " << fib[i];
	}
	getchar();
	getchar();
	return 0;
}

