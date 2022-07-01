#include<iostream>
#define e 1000000007
using namespace std;
long long luy_thua(long long a, long long b)
{
    if(b == 0) return 1;
    if(b == 1) return a;
    long long p = luy_thua(a, b / 2);
    p %= e;
    if(b % 2 == 0)
    {
        return (p * p) % e;
    }
    else{
        return (p * p) % e * a % e;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b; 
        cout << luy_thua(a, b);
        cout << endl;
    }
}