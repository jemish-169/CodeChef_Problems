// Indivisible Permutation
#include <bits/stdc++.h>
using namespace std;
list<int> ls;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        cout << n << " ";
        for (int i = 1; i < n; i++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}