/*
Who is taller!
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int a, b;
        cin >> a >> b;
        a > b ? cout << "A" << endl : cout << "B" << endl;
    }
    return 0;
}