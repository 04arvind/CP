#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                found = 1;
                break;
            }
        }
        if (found)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}