#include <iostream>
using namespace std;
int main()
{
    int t, count = 0;
    string st;
    cin >> t;
    while (t--) {
        cin >> st;
        if (st == "Tetrahedron") {
            count += 4;
        }
        else if (st == "Cube") {
            count += 6;
        }
        else if (st == "Octahedron") {
            count += 8;
        }
        else if (st == "Dodecahedron") {
            count += 12;
        }
        else if (st == "Icosahedron") {
            count += 20;
        }
    }
    cout << count;
    return 0;
}
