#include <iostream>
using namespace std;
int main() {
    int n, x = 0;
    string st;
    cin >> n;
    while (n--) {
        cin >> st;
        if (st == "X++" || st == "++X") {
            x++;
        }
        else if (st == "X--" || st == "--X") {
            x--;
        }
    }
    cout << x;
    return 0;
}
