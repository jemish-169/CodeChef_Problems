/*
DNA Storage
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
        int n;
        string s, str = "";
        cin >> n >> s;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                str += "A";
            if (s[i] == '0' && s[i + 1] == '1')
                str += "T";
            if (s[i] == '1' && s[i + 1] == '0')
                str += "C";
            if (s[i] == '1' && s[i + 1] == '1')
                str += "G";
        }
        cout << str << endl;
    }
    return 0;
}