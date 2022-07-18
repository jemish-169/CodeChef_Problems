/*
K-MEX
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
        int n, a, k, x(0);
        cin >> n >> a >> k;
        int arr[n];
        int h[100] = {0}, y(0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            h[arr[i]]++;
        }
        for (int i = 0; i < a - 1; i++)
            if (h[k] == 0)
                y = 1;

        if (y == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}