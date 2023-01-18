/*
Lcm hates Gcd
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
        int a, b;
        cin >> a >> b;
        int n = max(a, b), mini = INT16_MAX;
        for (int i = 1; i <= n; i++)
        {
            int x = __gcd(b, i);
            int lcm = (i * a) / __gcd(a, i);
            mini = min(mini, lcm - x);
        }
        cout << mini << endl;
    }
    return 0;
}