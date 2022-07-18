/*
Circular Track
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
    cin >> cases;
    while (cases--)
    {
        int a, b, m;
        cin >> a >> b >> m;
        int x = abs(a - b);
        int y = m - x;
        cout << min(x, y) << endl;
    }
    return 0;
}