#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define ll long long
int a[10005];
int main(int argc, char const *argv[])
{
    int n, k;
    double x;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[i] = x*100;
    }
    return 0;
}