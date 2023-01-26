/*
Two Ranges
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
        unordered_set<int> st;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = a; i <= b; i++)
            st.insert(i);
        for (int i = c; i <= d; i++)
            st.insert(i);
        cout << st.size() << endl;
    }
    return 0;
}