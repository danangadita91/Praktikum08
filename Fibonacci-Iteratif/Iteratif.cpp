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
