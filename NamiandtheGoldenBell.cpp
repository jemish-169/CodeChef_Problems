/*
Nami and the Golden Bell
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
        int x;
        cin >> x;
        int z = (x * (x + 1)) / 2;
        int j = x / 2;
        while (z > j * j)
            j++;
        cout << j << endl;
    }
    return 0;
}