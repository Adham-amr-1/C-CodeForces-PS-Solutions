#include <iostream>
using namespace std;
int main() {
    string st;
    cin >> st;
    if (st[0] >= 65 && st[0] <= 90) {
        cout << st;
    }
    else {
        st[0] -= 32;
        cout << st;
    }
    return 0;
}
