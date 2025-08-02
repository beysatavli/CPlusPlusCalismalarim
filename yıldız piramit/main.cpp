#include <iostream>
using namespace std;

int main() {
    int i, j, k, m;       // k satır sayısı oluyor. m ile ise düzenli bir şekil ortaya çıksın diye boşluk ayarlıyoruz.
    cout << "Satır sayısı giriniz: " ;
    cin >> k;

    for (int i = 0; i <= k; i++) {
        for (int m = i; m < k; m++) {
            cout << " " ;
        }
        for (int j = 0; j < i; j++) {
            cout << " *";

        }
        cout << "\n";
    }
    return 0;
}