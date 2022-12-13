/*
The product mystery
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
        int b, c;
        cin >> b >> c;
        int h = b, t = c;
        while (h != t)
        {
            if (h > t)
                h -= t;
            else
                t -= h;
        }
        cout << ((b * c) / h) / min(b, c) << endl;
    }
    return 0;
}