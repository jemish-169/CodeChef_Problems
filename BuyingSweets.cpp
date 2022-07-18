/*
Buying Sweets
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n, rupees;
        cin >> n >> rupees;
        int a[n], disc[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> disc[i];
        int diff[n];
        for (int i = 0; i < n; i++)
            diff[i] = a[i] - disc[i];
        int mini = diff[0];
        for (int i = 0; i < n; i++)
            mini = min(diff[i], mini);
        }
    return 0;
}