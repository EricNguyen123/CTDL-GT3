#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int length[n + 1];
    string s;
    for(int i = 1; i <= n; i++)
    {
        cin >> s;
        length[i] = s.size();
    }
    int d = 0;
    int b[n + 1][25];
    for(int i = 1; i < n; i++)
    {
        b[i][0] = 0;
    }
    for(int i = 1; i < 21; i++)
    {
        b[0][i] = 0;
    }
    for(int i = 1; i < 21; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(length[j] == i)
            {
                b[j][i] = b[j - 1][i] + 1;
            }
            else{
                b[j][i] = b[j - 1][i];
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        int t = 0;
        t = max(t, i - k - 1);
        d += b[i][length[i]] - b[t][length[i]] - 1;
    }
    cout << d << endl;
    return 0;
}