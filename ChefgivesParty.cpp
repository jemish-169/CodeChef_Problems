/*

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
        int n, x, k;
        cin >> n >> x >> k;
        (n * x) <= k ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}