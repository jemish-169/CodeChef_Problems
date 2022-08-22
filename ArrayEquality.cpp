/*
Array Equality
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        map<int, int> mp;
        int maxi = INT_MIN;
        vector<int> vec;
        int x, data;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> data;
            mp[data]++;
        }
        for (auto i : mp)
            vec.push_back(i.second);
        maxi = *max_element(vec.begin(), vec.end());
        if (maxi > (x + 1) / 2)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}