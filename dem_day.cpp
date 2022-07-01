#include<iostream>
#define e 123456789
using namespace std;
unsigned long long n;
unsigned long long luy_thua(int n, unsigned long long k)
{
    if(k == 0) return 1;
    if(k == 1) return n;
    unsigned long long p = luy_thua(n, k / 2);
    p %= e;
    p = (p * p) % e;
    if(k % 2 != 0)
    {
        p = (p * n) % e;
    }
    return p % e;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << luy_thua(2, n - 1) << endl;
    }
    return 0;
}