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
const int inf = 0x3f3f3f3f;
#define LOCAL
int a[100005];

int main(int argc, char * argv[]) 
{
	#ifdef LOCAL
	freopen("/Users/huangjiaming/Documents/Algorithm/oj/data.in", "r", stdin);
	//freopen("/Users/huangjiaming/Documents/Algorithm/oj/data.out", "w", stdout);
	#endif

	int n, x, m;

	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &x);
			a[x] = i;
		}
		scanf("%d", &m);
		ll ra, rb;
		ra = rb = 0;
		for (int i = 1; i <= m; i++)
		{
			scanf("%d", &x);
			ra += a[x];
			rb += n - a[x] + 1;
		}
		printf("%lld %lld\n", ra, rb);
	}

    return 0;
}