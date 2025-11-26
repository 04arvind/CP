#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int val = 0;
    int near = a[0];
    int mini = abs(a[0] - val);
    for (int i = 1; i < n; i++)
    {
        int diff = abs(a[i] - val);
        if (diff < mini)
        {
            mini = diff;
            near = a[i];
        }
    }
    cout << mini << endl;
    return 0;
}