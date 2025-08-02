#include <iostream>
using namespace std;

int main() {
    int i, j, k;
    cout << "Satır sayısını giriniz: " << endl;
    cin >> k;

    for (int i = k; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n" ;

    }
  return  0;
}