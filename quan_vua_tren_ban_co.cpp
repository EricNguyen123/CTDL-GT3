#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int s1,s2,f1,f2;
    cin >> s1 >> s2 >> f1 >> f2;
    int Max, Min;
    Max = max(s1, f1);
    Min = min(s1, f1);
    int length = Max - Min;
    Max = max(s2, f2);
    Min = min(s2, f2);
    int hight = Max - Min;
    Max = max(hight, length);
    Min = min(hight, length);
    int kq = Min + (Max - Min);
    cout << kq;
}