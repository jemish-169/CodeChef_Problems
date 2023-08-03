/*
Water Filling
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << ((a + b + c < 2) ? "Water filling time" : "Not now") << endl;
    }
    return 0;
}