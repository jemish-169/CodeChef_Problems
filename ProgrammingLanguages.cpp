/*
Programming Languages
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
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        if ((a == a1 && b == b1) || b == a1 && a == b1)
            cout << 1 << endl;
        else if ((a == a2 && b == b2) || b == a2 && a == b2)
            cout << 2 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}