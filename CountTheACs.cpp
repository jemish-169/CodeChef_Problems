/*
Count the ACs
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
        int num;
        cin >> num;
        if ((num % 100) + (num / 100) <= 10)
        {
            cout << (num % 100) + (num / 100) << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}