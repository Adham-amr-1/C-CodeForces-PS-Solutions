#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n;
    cin >> n;
    while (n > 0) {
        cin >> a >> b >> c;
        if (a + b == c) {
            cout << '+' << endl;
        }
        else if (a - b == c) {
            cout << '-' << endl;
        }
        n--;
    }
    return 0;

}

