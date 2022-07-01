#include<iostream>

using namespace std;
long long mod = 1e9 + 7;
long long luy_thua( long long a,  long long b)
{
    //if(b == 0) return 1;
    if(b == 1) return a;
    long long p = luy_thua(a, b / 2);
    p %= mod;
    if(b % 2 == 0)
    {
        p = (p * p) % mod;
    }
    else{
        p = (p * p) % mod * a % mod;
    }
    return p;
}
 long long dao( long long a)
{
     long long b = 0;
    while(a)
    {
        int c = a % 10;
        b = b * 10 + c; 
        a /= 10;
    }
    return b; 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
         long long a, b;
        cin >> a; 
        b = dao(a);
        cout << luy_thua(a, b);
        cout << endl;
    }
}