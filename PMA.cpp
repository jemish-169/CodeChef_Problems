/*
Plusle and Minun on Array
*/
#include <bits/stdc++.h>
using namespace std;
int mod(int num, int f)
{
    if (num < 0)
        return -num * f * -1;
    else
        return num * f * -1;
}
int main()
{
    int cases;
    cin >> cases;
    long long int data, n, flag = 1, sum = 0;
    while (cases--)
    {
        cin >> n;
        while (n--)
        {
            cin >> data;
            sum += mod(data, flag);
            flag *= -1;
            cout << sum << endl;
        }
        sum = 0;
        flag = -1;
    }
    return 0;
}