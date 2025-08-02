#include <iostream>
using namespace std;

int main() {
   int dizi[5] = {9,3,67, 34, 90};
   int min = dizi[0];
   int max = dizi[0];
   for(int i=0; i<5; i++) {
       if (dizi[i] < min)
           min = dizi[i];
       else if(dizi[i] > max)
       max = dizi[i];

   }
cout << "max eleman: " << max << endl ;
   cout << "min eleman: " << min << endl ;
}