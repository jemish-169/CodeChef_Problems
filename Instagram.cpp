#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        int a, b;
        cin >> a >> b;
        if (b * 10 < a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}