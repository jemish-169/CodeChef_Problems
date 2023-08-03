/*
Find A and B
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
        if ((a * b) % c == 0)
            cout << a * b << " " << c << "\n";
        else if ((c * b) % a == 0)
            cout << c * b << " " << a << "\n";
        else if ((a * c) % b == 0)
            cout << a * c << " " << b << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}