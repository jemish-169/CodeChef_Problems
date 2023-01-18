/*
Odd Even Binary String
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
        int c, t;
        cin >> c;
        int one(0), zero(0);
        for (int i = 0; i < c; i++)
        {
            cin >> t;
            t == 1 ? one++ : zero++;
        }
        if (zero % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}