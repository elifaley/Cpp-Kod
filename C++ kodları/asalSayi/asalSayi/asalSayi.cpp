#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

bool asalMi(int n) {
	if (n <= 1)
		return false;
	for (int i = 2;i <= sqrt(n);++i) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	setlocale(LC_ALL, "Turkish");

	int n;
	cout << "Bir sayı giriniz:\n";
	cin >> n;

	if (asalMi(n))
		cout << n << " Bir asal sayıdır." << endl;
	else
		cout << n << " Bir asal sayı değildir." << endl;
	return 0;
}
