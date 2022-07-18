/*
Chef and Masks
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    int x, y;
    while (cases--)
    {
        cin >> x >> y;
        if (x * 100 < y * 10)
            cout << "Disposable" << endl;
        else
            cout << "Cloth" << endl;
    }
    return 0;
}