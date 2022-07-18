/*
Subscriptions
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
        float n, s;
        cin >> n >> s;
        n = ceil(n / 6);
        cout << n * s << endl;
    }
    return 0;
}