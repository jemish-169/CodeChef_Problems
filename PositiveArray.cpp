/*
Positive array
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
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x;
        int a[x];
        for (int i = 0; i < x; i++)
            cin >> a[i];
        sort(a, a + x);
        int j = 1, cnt = 1;
        for (int i = 0; i < x; i++)
        {
            if (a[i] >= j)
                j++;
            else
            {
                j = 1;
                ++cnt;
                --i;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}