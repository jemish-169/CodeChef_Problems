/*
Two dishes
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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        if (b < n)
            cout << "NO" << endl;
        else if (a + c < n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}