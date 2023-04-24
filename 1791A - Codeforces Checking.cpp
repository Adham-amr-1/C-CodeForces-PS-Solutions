#include <iostream>
using namespace std;
int main()
{
    int n, i;
    string st = "codeforces";
    char s;
    cin >> n;
    while (n--) {
        bool flag = false;
        cin >> s;
        for (i = 0; i < st.length(); i++) {
            if (st[i] == s) {
                flag = true;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
