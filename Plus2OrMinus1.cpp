/*
Plus two or minus two
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
        int c;
        cin >> c;
        if (c)
            cout << c * 3 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}