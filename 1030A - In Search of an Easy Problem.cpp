#include <iostream>
using namespace std;
int main()
{
    int n, t, count = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        count += n;
    }
    if (count >= 1) {
        cout << "HARD";
    }
    else {
        cout << "EASY";
    }
    return 0;
}
