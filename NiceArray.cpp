/*
Nice Array
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
        float n, k;
        cin >> n >> k;
        vector<float> vec(n);
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            sum += vec[i];
        }
        if (ceil(sum / k) == 0 || floor(sum / k) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}