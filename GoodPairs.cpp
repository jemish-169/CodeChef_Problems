/*
Good Pairs
*/
#include <bits/stdc++.h>
#define maxi 0;
#define mini 10e8 + 10;
using namespace std;
set<int> st;
map<int, int> mp1;
map<int, int> mp2;
list<int> ls;
vector<int> vec;
int main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, data;
        cin >> n;
        int a[n], b[n], flags = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> data;
            mp1.insert({i, data});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> data;
            mp2.insert({i, data});
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = n; i < j; j--)
            {
                if (a[i] == b[j] && a[j] == b[i])
                    flags++;
            }
        }
        cout << flags << endl;
    }
    return 0;
}