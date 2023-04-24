#include <iostream>
using namespace std;
int main()
{
    int t, a, b, n, count;
    cin >> t;
    while (t--) {
        cin >> a >> b >> n;
        int tempa = a, tempb = b;
        count = 0;
        while (a <= n && b<=n) {
            if (a < b) {
                a += b;
            }
            else {
                b += a;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
