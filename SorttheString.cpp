/*
Sort the String
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
        int x, cnt(0);
        string str;
        cin >> x >> str;
        for (int i = str.size() - 2; i >= 0; i--)
        {
            if (str[i] == '1')
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}