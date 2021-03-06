#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <deque>
#include <complex>
 
#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
 
const double PI = acos(-1.0);
 
int n, gh[9];
long long lt[9][100];
const int p[9] = {2,3,5,7,11,13,17,19,23};
const long long oo = 1000111000111000111LL;
 
void init() {
    REP(k,9) {
        lt[k][0] = 1;
        gh[k] = 0;
        while (lt[k][gh[k]] < oo / p[k]) {
            ++gh[k];
            lt[k][gh[k]] = lt[k][gh[k]-1] * p[k];
        }
    }
}
 
long long f[1011][10];
 
long long get(int n, int k) {
    if (n == 1) return 1;
    if (k < 0) return oo;
    
    if (f[n][k]) return f[n][k];
    long long res = get(n, k-1);
    
    FOR(i,1,gh[k])
    if (n % (i+1) == 0) {
        long long u = get(n / (i+1), k-1);
        if (u < oo / lt[k][i])
            res = min(res, u * lt[k][i]);
    }
    
    return f[n][k] = res;
}
 
int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    init();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << get(n, 8);
        cout << endl;
    }
    
    return 0;
}
