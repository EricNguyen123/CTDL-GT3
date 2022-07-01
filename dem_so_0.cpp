#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[10000];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = n - 1;
        int mid;
        int dem = 0;
        while(l <= r)
        {
            mid = (l + r) / 2;
            if(a[mid] == 0)
            {
                dem += mid - l + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << dem << endl;
    }
    return 0;
}