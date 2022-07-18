/*
Reversal Sorting
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
        int n, j, sum = 0;
        cin >> n >> sum;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i;
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                if (a[i] + a[i + 1] <= sum)
                    swap(a[i], a[i + 1]);
                else
                    goto next;
            }
        }
    next:
        cout << ((i != n - 1) ? "NO" : "YES") << endl;
    }
    return 0;
}