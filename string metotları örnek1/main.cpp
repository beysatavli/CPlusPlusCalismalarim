/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Bugün minibüse bindik";
    s.length();
    cout << "Uzunluğu: " << s.length() << endl;

    s.at(7);
    cout << "Yeni hali: " << s.at(7)<< endl;

    s.back();
    cout << "Son harf: " << s.back() << endl;

}
 */


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Bir cümle giriniz: ";
    cin >> s;

    size_t pos = s.find("C++");

    if (pos != string::npos) {
        cout << "Var.";
    }
    else {
        cout << "Yok.";
    }
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Bugün hava çok güzel";
    cout << s << endl;
    s.erase(12,2);
    cout << "Yeni hali: " << s.erase(12,2) << endl;
}
 */

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Bir cümle girin: ";
    getline(cin, s);

    int boslukSayisi = 0;
    for (size_t i = 0; i < s.length(); ++i){
        if (s[i] == ' ')
            boslukSayisi++;
    }
    cout << "Boşluk sayısı: " << boslukSayisi << endl;
    return 0;
}
 */












































