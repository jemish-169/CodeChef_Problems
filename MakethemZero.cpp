/*
Make them Zero
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            maxi = max(maxi, a);
        }
        int f(0);
        while (maxi != 0)
        {
            maxi >>= 1;
            f++;
        }
        cout << f << endl;
    }
    return 0;
}