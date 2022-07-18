/*
Complementary Strand in a DNA
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
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                cout << 'T';
            if (s[i] == 'T')
                cout << 'A';
            if (s[i] == 'G')
                cout << 'C';
            if (s[i] == 'C')
                cout << 'G';
        }
        cout << endl;
    }
    return 0;
}