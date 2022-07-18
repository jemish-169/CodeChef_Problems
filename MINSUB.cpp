#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void fun()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll c0 = 0, c1 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            c1++;
        else
            c0++;
    }
    if (c0 == 0 || c1 == 0)
    {
        cout << s << endl
             << s << endl;
        return;
    }
    string ans = "", ans2 = "";
    if (c0 < c1)
    {
        ll temp = c0 + 1;
        ll temp1 = c1, t2;

        while (temp)
        {
            t2 = (temp1 / temp);
            temp1 = temp1 - t2;
            while (t2--)
            {
                ans += '1';
            }

            temp--;
            if (temp)
            {
                ans += '0';
            }
        }
        while (c0--)
        {
            ans2 += '0';
        }
        while (c1--)
        {
            ans2 += '1';
        }
    }
    else
    {
        ll temp = c1 + 1;
        ll temp1 = c0, t2;

        while (temp)
        {
            t2 = (temp1 / temp);
            temp1 = temp1 - t2;
            while (t2--)
            {

                ans += '0';
            }

            temp--;
            if (temp)
            {
                ans += '1';
            }
        }
        //    cout<<ans<<"yes";
        while (c1--)
        {
            ans2 += '1';
        }
        while (c0--)
        {
            ans2 += '0';
        }
    }
    reverse(ans.begin(), ans.end());
    //    cout<<ans<<"fs";

    cout << ans << endl
         << ans2 << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        fun();
    }
}