/*
ATM Machine
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
        int x, y;
        cin >> x >> y;
        string s;
        int c;
        for (int i = 0; i < x; i++)
        {
            cin >> c;
            if (c <= y)
            {
                y -= c;
                s.push_back('1');
            }
            else
                s.push_back('0');
        }
        cout << s << endl;
    }
    return 0;
}