#include <iostream>
using namespace std;

int main() {
    int i, j, m;

    cout << "satır sayısı girin: " ;
    cin >> m;

    for(int i=0; i<=m; i++){
        for (int j=0; j<i; j++) {
            cout << "* ";

        }
        cout << "\n";
    }
    return 0;
}