/*
Wordle
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s1, s2, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        for (int j = 0; j < 5; j++)
        {
            if (s1[j] != s2[j])
                m += 'B';
            else
                m += 'G';
        }
        cout << m << endl;
        m = ' ';
    }
    return 0;
}