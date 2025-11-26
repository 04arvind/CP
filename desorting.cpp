#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ops = INT_MAX;
        if (!is_sorted(a.begin(), a.end()))
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                int diff = a[i + 1] - a[i];
                int operations = diff / 2 + 1;
                ops = min(ops, operations);
            }
            else
            {
                return 0;
            }
        }
        cout << ops << endl;
    }

    return 0;
}