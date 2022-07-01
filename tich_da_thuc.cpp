#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int p = n + m - 1;
        int a[n], b[m], c[250] = {};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int j = 0; j < m; j++)
        {
            cin >> b[j];
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                c[i + j] += a[i] * b[j];
            }
        }
        for(int i = 0; i < p; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}