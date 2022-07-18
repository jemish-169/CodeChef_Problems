/*
Retrieve the Array
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
        int n,sum(0);
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
 {           cin >> a[i];
 sum+=a[i];
}        sum /= (n + 1);
        vector<int> vc;
        for (auto i : a)
            vc.push_back(i - sum);
        for (auto i : vc)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}