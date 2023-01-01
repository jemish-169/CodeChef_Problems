/*
slow solution
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
        int a, b, c;
        cin >> a >> b >> c;
        if (c / b >= a)
            cout << a * b * b << endl;
        else
        {
            int q = c / b;
            int p = c % b;
            cout << (q * b * b + p * p) << endl;
        }
    }
    return 0;
}