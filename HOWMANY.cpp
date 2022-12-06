/*
HOW MANY DIGITS DO I HAVE
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int x, y = 0;
        cin >> x;
        while (x != 0)
        {
            x /= 10;
            y++;
        }
        if (y == 1)
            cout << 1 << endl;
        if (y == 2)
            cout << 2 << endl;
        if (y == 3)
            cout << 3 << endl;
        if (y > 3)
            cout << "More than 3 digits" << endl;
    }
    return 0;
}