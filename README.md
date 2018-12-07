# Praktikum08
# Latihan 1 " Program Fibonacci dengan cara Iteratif"
```
Alur Algoritma:
1. Membuat sebuah fungsi fibonacci
	int fibonacci(int X, int Y, int N){
	int Z; }
   Penjelasan : variable X sebagai input pertama
		variable Y sebagai input nilai ke  2
		variable Z sebagai batasan perulangan
		fibonacci adalah deret hasil perhitungan dari angka ke-1 dan angka ke-2 untuk di tampilkan pada nilai selanjutnya
2. Membuat sebuah perulangan untuk memnentukan batas perulangan
	for (int i=0; i<N; i++){
  	Z = X + Y;
  	if (i==X){
   	cout<<X;
  	}
  	else if (i==Y){
   	cout<<" , "<<Y;
   	}
   	else{
    	cout<<" , "<<Z;
    	X = Y;
    	Y = Z;}
 	}
3. Membuat sebuah fungsi utama untuk input nilai dan menampilkan hasil fibonacci
	int main() {
 	int N,X,Y;
```
Berikut Pseudo-Code :
```
1. X=... X<==
2. Print X
3. Y=... Y<==
4. Print Y
5. Z=... Z<==
6. print Fibonacci(X, Y, Z)
```
Berikut Kode Lengkap :
```c++
#include <iostream>
using namespace std;

int fibonacci(int X, int Y, int N){
 int Z;
 for (int i=0; i<N; i++){
  Z = X + Y;
  if (i==X){
   cout<<X;
  }
  else if (i==Y){
   cout<<" , "<<Y;
   }
   else{
    cout<<" , "<<Z;
    X = Y;
    Y = Z;
   }
 }
}
int main() {
 int N,X,Y;

 cout<< "Program Deret Fibonacci Iteratif\n";
 cout<< "\nMasukan Nilai ke-1: ";
 cin>>X;
 cout<< "Masukan Nilai ke-2: ";
 cin>>Y;
 cout<< "Masukan Batas Perulangan: ";
 cin>>N;
 cout<<"Deret Fibonacci : "<< X<< " dan "<<Y<< " adalah: ";
 fibonacci(X, Y, N);
 return 0;
 }
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum08/master/Fibonacci-Iteratif/Fibo-Iteratif.png)

# Latihan 2 "Program Perkalian dengan cara Rekursif"

```
Alur Algoritma :
1. Membuat sebuah fungsi rekursif
	int kali_rekursif(int a, int b){
 	if (b==0)
  	return 0;
 	else if (b > 0)
  	return a + kali_rekursif(a, b - 1);
 	else
  	return (-a) + kali_rekursif(a, b+1); }
2. Membuat sebuah fungsi utama
	int main(){
    	int A, B; }
```
Berikut Pseudo-Code :
```
1. A=... A<==
2. Print A
3. B=... B<==
4. Print B
5. Print A*B
```
Berikut Kode Lengkap :
```c++
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
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum08/master/Perkalian-Rekursif/Perkalian-rekursif.png)

# Latihan 3 "Program Pembagian dengan cara Rekursif"

```
Alur Algoritma :
1. Membuat sebuah fungsi rekursif bagi
	int bagi(int a, int b){
	while (b==0) {
        cout<< "\nNilai Ke-2 Tidak Boleh NOL ";
        cout<< "\nMasukan Nilai Ke-2 : ";
        cin>> b; }
    	if (a==0)
        return 0;
    	else if (a<b)
        return 1+bagi(a,b-a);
    	else
        return 1+bagi(a-b,b); }
   Penjelasan : int A, Int B sebagai variable Input
		while(b==0) sebagai pencegah nilai input B=0
2. Membuat sebuah fungsi utama untuk input
	int main(){
    	int a,b; }
```
Berikut Pseudo-Code :
```
1. A=... A<==
2. Print A
3. B=... B<==
4. Print B
5. Print A*B
```
Berikut Kode Lengkap :
```c++
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
```
![img](https://raw.githubusercontent.com/danangadita91/Praktikum08/master/LATIHAN3/Latihan3.png)
