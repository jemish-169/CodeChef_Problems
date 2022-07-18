/*
Zero Ones Equal One Zeros
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
        int x;
        char b = '0';
        cin >> x;
        char s[x];
        string s1;
        for (int i = 0; i < x / 2; i++)
        {
            s[i] = b;
            s[x - i - 1] = b;
            b == '0' ? b = '1' : b = '0';
        }
        if (x % 2 == 1)
            s[x / 2] = b;
        for (int i = 0; i < x; i++)
            s1.push_back(s[i]);
        cout << s1 << endl;
    }
    return 0;
}