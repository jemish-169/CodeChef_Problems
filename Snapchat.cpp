#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        int t;
        vector<int> v(n), vec(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        int streak(0), maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0 && vec[i] != 0)
                streak++;
            else
                streak = 0;
            maxi = max(maxi, streak);
        }
        cout << maxi << endl;
    }
    return 0;
}