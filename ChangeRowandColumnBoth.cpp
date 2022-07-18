/*
Change Row and Column Both
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
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == c || b == d)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}