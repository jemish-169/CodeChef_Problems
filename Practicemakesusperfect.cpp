/*
Practice makes us perfect
*/
#include <bits/stdc++.h>
#define maxi 0;
#define mini 10e8 + 10;
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int main()
{
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int f(0), a;
        for (int i = 0; i < 4; i++)
        {
            cin >> a;
            if (a >= 10)
                f++;
        }
        cout << f;
    }
    return 0;
}