/*
Pseudo Sorted Array
*/
#include <bits/stdc++.h>
using namespace std;
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main()
{
    int data, flag = 0, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        int a[data], b[data];
        for (int i = 0; i < data; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + data);
        for (int i = 0; i < data - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(&a[i], &a[i + 1]);
                break;
            }
        }
        for (flag = 0; flag < data; flag++)
            if (a[flag] != b[flag])
            {
                cout << "NO" << endl;
                break;
            }
        if (flag == data)
            cout << "YES" << endl;
    }
    return 0;
}