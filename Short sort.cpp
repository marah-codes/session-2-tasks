#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;

    while (t > 0) {
        cin >> s;

        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
    return 0;
}
