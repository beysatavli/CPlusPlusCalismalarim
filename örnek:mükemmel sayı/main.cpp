#include <iostream>
using namespace std;


 int main() {
     int sayi;
     cout << "Sayı giriniz: ";
     cin >> sayi;
     int toplam = 0;

     for (int i = 1; i < sayi; i++) {
         if(sayi % i == 0 )
             toplam = toplam +i;
 }
     if(toplam == sayi)
         cout << "Mükemmel sayı";
         else
             cout << "Mükemmel sayı değil";

      return 0;
 }