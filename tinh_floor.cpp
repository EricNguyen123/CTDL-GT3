#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        unsigned long long x;
        cin >> n;
        cin >> x;
        unsigned long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = n - 1;
        int mid = -1;
        while(l <= r)
        {
            mid =(l + r) / 2;
            if(a[mid] == x)
            {
                l = mid + 1;
                break;
            }
            else if(a[mid] < x)
            {
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        if(l == 0)
        {
            if(a[l] <= x)
            {
                cout << l << endl;
            }
            else{
                cout << -1 <<endl;
            }
        }
        else{
             cout << l << endl;
        }
           
    }
    return 0;
}