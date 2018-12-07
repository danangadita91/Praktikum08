#include <iostream>

using namespace std;
int bagi(int a, int b)
{
    while (b==0) {
        cout<< "\nNilai Ke-2 Tidak Boleh NOL ";
        cout<< "\nMasukan Nilai Ke-2 : ";
        cin>> b;
    }
    if (a==0)
        return 0;
    else if (a<b)
        return 1+bagi(a,b-a);
    else
        return 1+bagi(a-b,b);

}
int main()
{
    int a,b;
    cout << "Masukan bilangan pertama :";
    cin>> a;
    cout << "Masukan bilangan kedua :";
    cin>> b;
    cout<< " Hasil = " <<bagi (a,b);
    return 0;
}
