#include <iostream>
using namespace std;
int main()
{

    int c;
    cin >> c;
    while (c--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        if (a + b == x || b + x == a || a + x == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}