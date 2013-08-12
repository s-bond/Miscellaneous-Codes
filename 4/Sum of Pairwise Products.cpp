/* @
 * Siddharth Maloo
*/
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <cstring>
#include <time.h>
#include <fstream>
#include <bitset>
#include <set>
/////////////////
#define ULL unsigned long long int
#define GInt ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%llu\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define MaxN 1000001
/////////////////
using namespace std;
ULL d[MaxN], a[MaxN], sum[MaxN];
int N, M;
void perform(){
    sum[0] = a[0];
	d[0]   = a[0]*a[0];
	FOR(i,1,N){
		d[i] = d[i-1] + (a[i]*a[i]) + sum[i-1]*a[i];
		sum[i] += sum[i-1]+a[i];
	}
}
int main () {
	int i, u, v;
    N = GInt;
    FOR(i,0,N) a[i]=GL;
	M = GInt;
	perform();
	while(M--){
		u = GInt; v = GInt;
		if(u==0)
		PLng(d[v]);
		else
		PLng(d[v]-d[u-1]-(sum[u-1]*(sum[v]-sum[u-1])));
	}	
	return 0;
}
