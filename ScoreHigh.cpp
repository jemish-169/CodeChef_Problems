/*
Score High
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a, n;
        cin >> n;
        for (int i = 0; i < 4; i++)
        {
            cin >> a;
            maxi = max(maxi, a);
        }
        cout << maxi << endl;
        maxi = 0;
    }
    return 0;
}