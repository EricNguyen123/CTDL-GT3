#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector <unsigned long long> v;
string chuyen_doi(unsigned long long a)
{
    string s = "";
    while(a > 0)
    {
        int b = a % 10;
        s = char(b + '0') + s;
        a /= 10;
    }
    return s;
}
string xu_ly(string s)
{
    string x;
   
    for(int i = 0; i < v.size(); i++)
    {
        x = chuyen_doi(v[i]);
        int l = 0;
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == x[l]) 
            {
                l++;
            }
        } 
        if(l == x.size())
        {
            return x;
        }
    }
    x = "-1";
    return x;
}
int main()
{
    for(int i = 1e2; i >= 1; i--) 
    {
        unsigned long long x = i * i * i;
        //cout << x << " ";
        v.push_back(x);
       // cout << v.front() << " ";
    }
    int t;
    cin >> t;
    //cout << chuyen_doi(t) << " ";
    while(t--)
    {
        string s;
        cin >> s;
        cout << xu_ly(s) << endl;
    }
    return 0;
}

