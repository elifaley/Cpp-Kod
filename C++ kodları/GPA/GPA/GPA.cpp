#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int ogrenciSayisi;
    cout << "Öğrenci Sayısını Giriniz:\n";
    cin >> ogrenciSayisi;

    double* notlar = new double[ogrenciSayisi];

    double toplam = 0.0;
    for (int i = 0; i < ogrenciSayisi; ++i) {
        cout <<(i + 1) << "." << "Öğrencinin" << " notunu giriniz: ";
        cin >> notlar[i];
        toplam += notlar[i];
    }

    double ort = toplam / ogrenciSayisi;
    cout << "Sınıf Notlarının Ortalaması: " << ort << endl;

    delete[] notlar;

    return 0;
}
