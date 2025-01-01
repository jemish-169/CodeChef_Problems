/*
Bulk Discount
*/
#include <bits/stdc++.h>
// #define int int64_t
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
        int n;
        cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((vec[i] - i) < 0)
                vec[i] = 0;
            else
                vec[i] = vec[i] - i;
            sum += vec[i];
        }
        cout << sum << endl;
    }
    return 0;
}