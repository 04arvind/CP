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
        vector<int> arr;
        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int val = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            val += arr[i];
        }
        cout << -val << endl;
    }
    return 0;
}