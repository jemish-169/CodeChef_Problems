/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> x >> y;
        cout << min(x * 3, y * 2) << endl;
    }
    return 0;
}