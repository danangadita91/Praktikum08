#include <iostream>
using namespace std;

int kali_rekursif(int a, int b)
{
 if (b==0)
  return 0;
 else if (b > 0)
  return a + kali_rekursif(a, b - 1);
 else
  return (-a) + kali_rekursif(a, b+1);
}

int main()
{
    int A, B;

    cout<< "Masukan Nilai A: ";
    cin>>A;
    cout<< "Masukan Nilai B: ";
    cin>>B;
    cout << "Hasil Perkalian dari "<< A<< " dan "<< B<< " adalah: "<<kali_rekursif(A, B) << endl;
}
