/*
The Two Dishes
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
        int n, s, a;
        cin >> n >> s;
        for (int i = 0; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
                if (i + j == s && abs(i - j) > a)
                    a = abs(i - j);
        }
        if (n >= s)
            a = s;
        else
            a = n - (s - n);
        cout << a << endl;
    }
    return 0;
}