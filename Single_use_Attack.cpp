/*
Single-use Attack
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
        int a, b, c, n = 1;
        cin >> a >> b >> c;

        a -= c;
        n += (a / b);
        if (a % b != 0)
            n++;
        cout << n << endl;
    }
    return 0;
}