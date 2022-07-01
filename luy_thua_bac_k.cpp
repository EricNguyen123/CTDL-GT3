#include<iostream>
#define e 1000000007
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int k;
        cin >> n >> k;
        long long s[1005] = {};
        long long v = n * (n + 1) % e;
        s[1] = v / 2;
        s[1] %= e;
        for(int i = 2; i <= k; i++)
        {
            v = v * (n - i + 1) % e;
            s[i] = s[i - 1] + v / (i + 1);
            s[i] %= e;
        }
        cout << s[k] << endl;
    }
    return 0;
}