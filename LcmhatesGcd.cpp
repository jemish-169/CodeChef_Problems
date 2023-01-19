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
        int x = __gcd(a, b);
        int lcmval = (a * x) / __gcd(a, x);
        int gcdval = __gcd(b, x);
        cout << lcmval - gcdval << endl;
    }
    return 0;
}