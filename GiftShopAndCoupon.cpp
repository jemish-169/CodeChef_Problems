/*
Gift shop and coupon
*/
#include <bits/stdc++.h>
using namespace std;
int roundup(int x)
{
    double a = x;
    int res = round((a / 2));
    return res;
}
int main()
{
    int cases = 0, n, k, sum = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
            sum += arr[i];
        if (sum > k)
        {
            int i, sum2 = 0, flag = 0;
            for (i = 0; i < n; i++)
                if (sum2 < k)
                {
                    sum2 += arr[i];
                    flag++;
                }
            if (sum2 + roundup(arr[i]) <= k)
                flag++;
            cout << flag << endl;
        }
        else
            cout << n << endl;
    }
    return 0;
}