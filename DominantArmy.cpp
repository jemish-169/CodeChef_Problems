/*
Dominant Army
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
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        (a[0] + a[1]) < a[2] ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}