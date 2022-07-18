/*
Xor Palindrome
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, i = 0, j, f(0);
        string s;
        cin >> n >> s;
        j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j])
                f++;
            i++;
            j--;
        }
        cout << (f + 1) / 2 << endl;
    }
    return 0;
}