/*
Distinct Palindrome
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
        int n, x;
        float b = n;
        char c = 'a';
        cin >> n >> x;
        if (n == 1 && x == 1)
            cout << c << endl;
        else if ((n / x <= 1) || (x < floor(b / 2)))
            cout << -1 << endl;
        else
        {
            char s[n];
            for (int i = 0; i < n / 2; i++)
            {
                s[i] = c;
                s[n - 1 - i] = c;
                c++;
            }
            cout << s << " " << floor(b / 2) << endl;
        }
    }
    return 0;
}