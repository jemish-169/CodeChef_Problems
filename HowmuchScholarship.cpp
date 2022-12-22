/*
How much Scholarship
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
    if (cases <= 50)
        cout << 100 << endl;
    else if (cases > 50 && cases <= 100)
        cout << 50 << endl;
    else
        cout << 0 << endl;
    return 0;
}