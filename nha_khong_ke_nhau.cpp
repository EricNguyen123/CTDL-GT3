#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long Max ;
        long long Max1 ;
        int m ;
        int m1;
        if(a[0] >= a[1])
        {
            Max = a[0];
            m = 0;
            Max1 = a[1];
            m1 = 1;
        }
        else{
            Max = a[1];
            m = 1;
            Max1 = a[0];
            m1 = 0;
        }
        for(int i = 2; i < n; i++)
        {
            if(a[i] > Max && m == i - 1)
            {
                long long x = Max;
                m1 = m;
                Max = Max1 + a[i];
                m = i;
                Max1 = x;
            } 
            else if(a[i] > Max && m != i - 1)
            {
                Max1 = Max;
                m1 = m;
                Max = Max + a[i];
                m = i;
            }
            else if(a[i] == Max && m == i -1)
            {
                Max += Max1;
                m = i;
                Max1 = a[i];
            }
            else if(a[i] == Max && m != i - 1)
            {
                Max += a[i];
                m = i;
                Max1 = a[i];
            }
            else if(a[i] < Max && m == i - 1)
            {
                Max1 += a[i];
                if(Max < Max1)
                {
                    long long x = Max;
                    Max = Max1;
                    m = i;
                    Max1 = x;
                }
            }
            else if(a[i] < Max && m != i - 1)
            {
                long long x = Max;
                m1 = m;
                Max += a[i];
                m = i;
                Max1 = x;
            }
        }
        cout << Max << endl;
    }
    return 0;
}