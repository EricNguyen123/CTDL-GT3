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
        unsigned long long a[n], b[n - 1];
        for(int i = 0; i< n; i++)
        {
            cin >> a[i];
        }
        int d = 1;
        for(int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
            if(a[i] != b[i] && d == 1)
            {
                cout << i + 1 << endl;
                d = 0;
            }

        }
        if(d == 1)
        {
            cout << n << endl;
        }
    }
    return 0;
}