#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long maxi = *max_element(a.begin(), a.end());
        vector<long long> b, c;
        // b.push_back(a[0]);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != maxi)
            {
                b.push_back(a[i]);
            }
            else
                c.push_back(a[i]);
        }

        if (b.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (auto x : b)
                cout << x << " ";
            cout << endl;
            for (auto x : c)
                cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}