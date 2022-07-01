#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int f[3] = {};
    string s;
    int res = 0;
    cin >> n;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'X')
        {
            f[0]++;
        }
        else if(s[i] == 'T')
        {
            f[1]++;
        }
        else{
            f[2]++;
        }
    }
    for(int i = 0; i < f[0]; i++)
    {
        if(s[i] == 'T')
        {
            for(int j = f[0]; j < n; j++)
            {
                if(s[j] == 'X')
                {
                    swap(s[i], s[j]);
                    res++;
                    break;
                }
            }
        }
        else if(s[i] == 'D')
        {
            for(int j = n - 1; j >= f[0]; j--)
            {
                if(s[j] == 'X')
                {
                    swap(s[i], s[j]);
                    res++;
                    break;
                }
            }
        }
    }
    for(int i = f[0]; i < f[0] + f[1]; i++)
    {
        if(s[i] == 'D')
        {
            for(int j = f[0] + f[1]; j < n; j++)
            {
                swap(s[i], s[j]);
                res++;
                break;
            }
        }
    }
    cout << res;
    return 0;
}