
#include <iostream>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");

	char islem;
	double sayi1, sayi2;

	cout << "İşlem seçiniz (+, -, *, /)\n";
	cin >> islem;

	cout << "İki sayı giriniz:\n";
	cin >> sayi1 >> sayi2;

	switch (islem) {
	case'+':
		cout << "Sonuç:" << sayi1 + sayi2 << endl;
		break;
	case'-':
		cout << "Sonuç:" << sayi1 - sayi2 << endl;
		break;
	case'*':
		cout << "Sonuç:" << sayi1 * sayi2 << endl;
		break;
	case'/':
		if (sayi2 != 0)
			cout << "Sonuç:" << sayi1 / sayi2 << endl;
		else
			cout << "Hata: Sıfıra Bölme"<<endl;
		break;
	default: 
		cout << "Geçersiz İşlem!" << endl;
		break;
	
	}

	return 0;
}

