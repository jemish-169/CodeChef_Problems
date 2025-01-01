/*
Make Arithmetic Progression
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (y - x == z - y)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}