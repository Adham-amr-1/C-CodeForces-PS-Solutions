#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, a, b, pos;
    string st;
    cin >> t;
    while (t--) {
        cin >> st;
        pos = st.find('+');
        a = stoi(st.substr(0,pos));
        b = stoi(st.substr(pos+1));
        cout << a + b << endl;
    }
    return 0;
}
