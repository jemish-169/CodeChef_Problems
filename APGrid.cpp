/*
Ap grid
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, m, k;
        cin >> n >> m;
        vector<int> nNum, mNum;
        if (n > m)
        {
            for (int i = 1; i <= m; i++)
                mNum.push_back(i);
            int w = m + 1;
            while (w != n + 1)
            {
                nNum.push_back(w);
                w++;
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
                nNum.push_back(i);
            int w = n + 1;
            while (w != m + 1)
            {
                nNum.push_back(w);
                w++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int p = nNum[i];
            for (int j = 0; j < m; j++)
            {
                cout << p + mNum[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}