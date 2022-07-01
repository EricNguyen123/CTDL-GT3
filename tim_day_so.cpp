#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int Min = 1000000000;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        Min = min(a[i], Min);
    }
    long sum = 0;
    long s = 20000000;
    int c = 1;
    while(c < Min)
    {
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            int d = a[i] / c;
            if(a[i] / d != c){
                sum = s;
                break;
            }
            while(a[i] / d == c)
            {
                d--;
            }
            d++;
            sum += d;
        }
        s = min(s, sum);
        c++;
    }
    cout << s << endl;
    return 0;
}