/*
Too many items
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

    float cases = 1, x;
    cin >> cases;
    while (cases--)
    {
        cin >> x;
        cout << ceil(x / 10.0) << endl;
    }
    return 0;
}