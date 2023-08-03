/*
Card Swipe
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        unordered_map<int, int> mp;
        int x, n, maxi = INT_MIN;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (mp[x] == 1)
                mp.erase(x);
            else
                mp[x] = 1;
            int size = mp.size();
            maxi = max(maxi, size);
        }
        cout << maxi << "\n";
    }
    return 0;
}