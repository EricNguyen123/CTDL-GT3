#include<iostream>
#include<string>
using namespace std;
unsigned long long length[93];
void khoi_tao()
{
    length[0] = 0;
    length[1] = 1;
    for(int i = 2; i < 93; i++)
    {
        length[i] = length[i - 1] + length[i - 2];
    }
}
string vi_tri(unsigned long long i, unsigned long long n)
{
    if(n == 1) return "A";
    if(n == 2) return "B";
    if(i > length[n - 2])
    {
        return vi_tri(i - length[n - 2], n - 1);
    }
    return vi_tri(i, n - 2);
}
int main()
{
    int t;
    cin >> t;
    khoi_tao();
    while(t--)
    {
        unsigned long long i, n;
        cin >> n >> i;
        cout << vi_tri(i, n) << endl;
    }
    return 0;
}