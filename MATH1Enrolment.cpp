/*
MATH1 Enrolment
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
        int x, y;
        cin >> x >> y;
        cout << (y - x <= 0 ? 0 : y - x) << endl;
    }
    return 0;
}