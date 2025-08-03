#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Bir kelime girin: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'e') {
            s[i] = 'x';
        }

    }

    cout << s;

}