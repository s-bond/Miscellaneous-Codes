/* ~
 * Siddharth Maloo
 * IIIT-A
*/
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <string.h>
#include <string>
#include <math.h>
#include <cstdio>
#include <algorithm>
/////////////////
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define ULL unsigned long long int
#define mod 1000000007
/////////////////
ULL a[1000010];
using namespace std;
int main () {
	int i, j, k, c=0, t;
	t=GI;
	a[0]=1; a[1]=2;
	FOR(i,2,1000001) a[i] = (a[i-1]*a[i-2])%mod;
	while(t--) { i=GI; printf("%llu\n",a[i]); }
	return 0;
}
