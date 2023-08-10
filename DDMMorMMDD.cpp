/*
DDMM or MMDD
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
        string s;
        cin >> s;
        if ((s[0] >= '1' && s[1] > '2') || s[0] >= '2')
            cout << "DD/MM/YYYY" << endl;
        else if ((s[3] >= '1' && s[4] > '2') || s[3] >= '2')
            cout << "MM/DD/YYYY" << endl;
        else
            cout << "Both" << endl;
    }
    return 0;
}