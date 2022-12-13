/*
Positive Products
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
        int x, y, neg = 0, pos = 0;
        cin >> x;
        while (x--)
        {
            cin >> y;
            if (y > 0)
                pos++;
            if (y < 0)
                neg++;
        }
        cout << ((pos * (pos - 1)) / 2) + ((neg * (neg - 1)) / 2) << endl;
    }
    return 0;
}