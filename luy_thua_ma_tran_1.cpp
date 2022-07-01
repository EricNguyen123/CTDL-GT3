#include<iostream>
#define e 1000000007
using namespace std;
long long k;
struct matrix
{
    int n;
    long long a[15][15];
} Matrix;
void nhap()
{
    cin >> Matrix.n;
    cin >> k;
    for(int i = 0; i< Matrix.n; i++)
    {
        for(int j = 0; j < Matrix.n; j++)
        {
            cin >> Matrix.a[i][j];
        }
    }
}
matrix tich_Matrix(matrix x, matrix y)
{
    matrix z;
    z.n = x.n;
    for(int i = 0 ; i < x.n; i++)
    {
        for(int j = 0; j < x.n; j++)
        {
            z.a[i][j] = 0;
            for(int l = 0; l < x.n; l++)
            {
                z.a[i][j] += x.a[i][l] * y.a[l][j];
                z.a[i][j] %= e;
            }
        }
    }
    return z;
}
matrix luy_thua(matrix x, long long y)
{
    if(y == 1)
    {
        return x;
    }
    matrix p = luy_thua(x, y / 2);
    p = tich_Matrix(p, p);
    if(y % 2 != 0)
    {
        p = tich_Matrix(p, x);
    }
    return p;

}
void in()
{
    for(int i = 0; i < Matrix.n; i++)
    {
        for(int j = 0; j < Matrix.n; j++)
        {
            cout << Matrix.a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        Matrix = luy_thua(Matrix, k);
        in();
    }
    return 0;
}