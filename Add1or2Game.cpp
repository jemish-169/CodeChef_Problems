/*
Add 1 or 2 Game
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
        int x;
        cin >> x;
        if (x == 1)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
    }
    return 0;
}