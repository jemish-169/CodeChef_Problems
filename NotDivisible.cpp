/*
Not Divisible
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
        int a;
        cin >> a;
        for (int i = 0; i < a; i++)
            cout << (i % 2 == 0 ? 1 : 0) << " ";
        cout << "\n";
    }
    return 0;
}