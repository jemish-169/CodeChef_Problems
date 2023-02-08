/*
Take Not Less
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
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
        vector<int> vec(x);
        unordered_map<int, int> mp;
        for (int i = 0; i < x; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }
        int maxi = INT_MIN;
        maxi = *max_element(vec.begin(), vec.end());

        if (mp[maxi] % 2 == 0)
            cout << "Zenyk" << endl;
        else
            cout << "Marichka" << endl;
    }
    return 0;
}