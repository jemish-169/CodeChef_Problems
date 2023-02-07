/*
Average Array

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
        int a, b, n;
        cin >> a >> b;
        n = a;
        vector<int> vec(a, b);
        a /= 2;
        for (int i = 0; i < a; i++)
        {
            vec[i] -= (i + 1);
            vec[n - i - 1] += (i + 1);
        }
        for (auto i : vec)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}