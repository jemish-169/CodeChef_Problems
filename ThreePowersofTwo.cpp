/*
Three Powers of Two
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
        int a;
        cin >> a;
        string s;
        cin >> s;
        int c = 0;

        for (auto i : s)
            if (i == '1')
                c++;
        if (s == "1" || s == "10")
            cout << "NO" << endl;
        else if (c <= 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}