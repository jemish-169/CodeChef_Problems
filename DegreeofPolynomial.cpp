/*
Degree of Polynomial
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}