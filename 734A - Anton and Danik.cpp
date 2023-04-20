#include <iostream>
using namespace std;

int main() {
    int n, Dn = 0, An = 0, i;
    string st;
    cin >> n;
    cin >> st;
    for (i = 0; i < n; i++) {
        if (st[i] == 'A') {
            An++;
        }
        else if (st[i] == 'D') {
            Dn++;
        }
    }
    if (An > Dn) {
        cout << "Anton";
    }
    else if (Dn > An) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
    return 0;
}
