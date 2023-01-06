/*
Vaccine Dates
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
        cin >> b >> a >> c;
        if (a <= b && b <= c)
            cout << "Take second dose now" << endl;
        else if (b < a)
            cout << "Too Early" << endl;
        else if (b > c)
            cout << "Too Late" << endl;
    }
    return 0;
}