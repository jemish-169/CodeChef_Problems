/*
HILLS
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
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
        int x, a, b;
        cin >> x >> a >> b;
        vector<int> vec(x);
        for (int i = 0; i < x; i++)
            cin >> vec[i];
        int i;
        bool flag = false;
        for (i = 1; i < x; i++)
        {
            if (vec[i] - vec[i - 1] > a)
                break;
            if (vec[i - 1] - vec[i] > b && flag)
                break;
            if (vec[i - 1] - vec[i] > b)
                flag = true;
        }
        cout << i << endl;
    }
    return 0;
}