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

    char str[105];
    int n, a[30];
    scanf("%d", &n);
    scanf("%s", str);
    ms(a);
    rep(i, 0, n) a[str[i]-'a']++;
    rep(i, 0, n)
        if (a[str[i]-'a'] == 1) {
            printf("%c\n", str[i]);
            return 0;
        }
    puts("-1");
    return 0;
}