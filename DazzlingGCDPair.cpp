#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int t;
    while (b > 0)
    {
        t = a;
        a = b;
        b = t % a;
    }
    return (a);
}
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int a, b;
        bool bo = true;
        cin >> a >> b;
        for (int i = a + 1; i <= b; ++i)
        {
            for (int j = a; bo && j < i; ++j)
            {
                if (gcd(i, j) > 1)
                {
                    cout << j << " " << i << endl;
                    bo = false;
                    break;
                }
            }
        }
        if (bo)
            cout << -1 << endl;
    }
    return 0;
}