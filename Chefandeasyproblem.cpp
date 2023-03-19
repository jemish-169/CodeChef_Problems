/*
Chef and easy problem
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
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        int chef = 0, roma = 0;
        sort(vec.begin(), vec.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                chef += vec[i];
        }
        cout << chef << "\n";
    }
    return 0;
}