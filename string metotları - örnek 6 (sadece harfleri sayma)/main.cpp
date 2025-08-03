#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s = "abcd321!";
    int harf_sayisi = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            harf_sayisi++;
        }
    }
    cout << "Harf sayısı: " << harf_sayisi;
}