/*
Airline Restrictions
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
    cin >> cases;
    while (cases--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a + b <= d && c <= e)
            cout << "YES" << endl;
        else if (b + c <= d && a <= e)
            cout << "YES" << endl;
        else if (a + c <= d && b <= e)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}