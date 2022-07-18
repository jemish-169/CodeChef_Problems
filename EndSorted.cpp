/*
end sorted
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x, data;
        cin >> x;
        map<int, int> mp;
        for (int i = 0; i < x; i++)
        {
            cin >> data;
            mp.insert({data, i});
        }
        int a = mp[1];
        int b = mp[x];
        int c = x - b - 1;
        if (a < b)
            cout << a + c << endl;
        else
            cout << a + c - 1 << endl;
    }
    return 0;
}