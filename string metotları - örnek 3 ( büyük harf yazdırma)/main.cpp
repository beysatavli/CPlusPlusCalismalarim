#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "bEyZa";

    for (int i = 0; i<s.length(); i++) {
        if (isupper(s[i])) {
            cout << s[i];
        }
    }
}