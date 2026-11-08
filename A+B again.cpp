#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];

    for (int i = 0;i < t;i++)
        cin >> arr[i];

    for (int i = 0;i < t;i++) {
        int div = arr[i] / 10;
        int mod = arr[i] % 10;
        cout << div + mod << endl;
    }
}
