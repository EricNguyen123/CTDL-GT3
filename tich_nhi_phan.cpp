#include<iostream>
using namespace std;
long long luy_thua(int n, long long k)
{
    if(k == 0) return 1;
    if(k == 1) return n;
    long long p = luy_thua(n, k / 2);
    p = (p * p);
    if(k % 2 != 0)
    {
        p = p * n;
    }
    return p;
}
long long chuyen_doi(string a)
{
    long long v = 0;
    int j = a.size() - 1;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '1')
        {
            v += luy_thua(2, j);
        }
        j--;
    }
    return v;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        long long x, y;
        x = chuyen_doi(a);
        y = chuyen_doi(b);
        cout << x * y << endl;
    }
    return 0;
}