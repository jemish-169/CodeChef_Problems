/*
Candy Distribution
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
        int a, b;
        cin >> a >> b;
        if (a % b == 0 && (a / b) % 2 == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}