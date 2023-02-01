/*
Contruct Array
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
        int x;
        cin >> x;
        if (x % 2 == 1)
            cout << -1 << "\n";
        else
        {
            for (int i = 0; i < x; i++)
                cout << (i % 2 == 0 ? 0 : -1) << " ";
            cout << "\n";
        }
    }
    return 0;
}