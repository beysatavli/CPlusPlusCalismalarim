#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "beyza tavlı";
    bool bulundu = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            cout << "İlk boşluk indeksi: " << i;
            bulundu = true;
            break;
        }
    }
    if (!bulundu) {
        cout << "Boşluk yok";
    }
}