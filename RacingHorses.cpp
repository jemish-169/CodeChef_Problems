/*
Racing Horses
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
        int c;
        cin >> c;
        vector<int> vec(c);
        for (int i = 0; i < c; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        int mini = INT_MAX;
        for (int i = 0; i < c - 1; i++)
        {
            mini = min(vec[i + 1] - vec[i], mini);
        }
        cout << mini << endl;
    }
    return 0;
}