#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define rep(i, k, n) for (int i = k; i < n; i++)
#define repp(i, k, n) for (int i = k; i <= n; i++)
const int inf = 0x3f3f3f3f;
// #define LOCAL
int main(int argc, char * argv[]) 
{
    #ifdef LOCAL
    freopen("/Users/huangjiaming/Documents/Algorithm/oj/data.in", "r", stdin);
    //freopen("/Users/huangjiaming/Documents/Algorithm/oj/data.out", "w", stdout);
    #endif
    ll g1, g2, x, y, p1, p2;
    double eps2;
    cin >> g1 >> p1 >> g2 >> p2;
    y = (g2*(p2/100.0));
    while (true) {
        if (int(y*100.0/g2) > p2) break;
        y++;
    }
    x = ceil(g1*(p1/100.0));
    printf("%lld\n", y-x-1);

    return 0;
}