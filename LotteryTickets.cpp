/*
Lottery Tickets
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
        int n;
        cin >> n;
        vector<int> vec(n + 2);
        vec[0] = 1;
        vec[n + 1] = 1e6;
        for (int i = 1; i <= n; i++)
        {
            cin >> vec[i];
        }
        int chef = vec[1];
        sort(vec.begin(), vec.end());

        int maxi = 0, mini = 0;
        int maxI = -1, minI = -1;
        for (int i = 1; i < n + 2; i++)
        {
            if (chef == vec[i])
            {
                mini = vec[i - 1];
                maxi = vec[i + 1];

                minI = i - 1;
                maxI = i + 1;
                break;
            }
        }
        int sum = 0;
        if (minI != 0)
            sum += (chef - mini) / 2;
        else
            sum += (chef - mini);

        if (maxI != n + 1)
            sum += (maxi - chef) / 2;
        else
            sum += (maxi - chef);

        cout << sum + 1 << endl;
    }
    return 0;
}