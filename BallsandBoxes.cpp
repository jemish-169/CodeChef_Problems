/*
Balls and Boxes
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
        int n, l;
        cin >> n >> l;
        if ((l * (l + 1)) / 2 <= n)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}