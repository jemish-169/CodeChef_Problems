/*
Spice level
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
        int a;
        cin >> a;
        if (a < 4)
            cout << "MILD" << endl;
        else if (a >= 4 && a < 7)
            cout << "MEDIUM" << endl;
        else
            cout << "HOT" << endl;
    }
    return 0;
}