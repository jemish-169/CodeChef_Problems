/*
Rearranging digits to get a multiple of 5
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
        int n;
        bool b = false;
        string s;
        cin >> n >> s;
        for (auto i : s)
            if (i == '0' || i == '5')
            {
                b = true;
                break;
            }
        if (b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}