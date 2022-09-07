/*
Permutation Clear
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
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
        set<int> st;
        int n, data;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> data;
            st.insert(data);
        }
        for (int i = 0; i < n; i++)
        {
            if (st.find(a[i]) == st.end())
                cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}