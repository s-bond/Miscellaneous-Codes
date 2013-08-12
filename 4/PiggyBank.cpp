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
#define LL long long int
#define GL ({long long int t;scanf("%lld",&t);t;})
#define GI ({int t;scanf("%d",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%lld\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
using namespace std;
/////////////////
int d[10002], a[502], b[502];
int N, E, F;
int main () {
	int i, j, k, t, x;
	scanf("%d",&t);
	while(t--){
		E=GI; F=GI; N=GI;
		FOR(i,0,N) {a[i]=GI; b[i]=GI;}//a = price b = weight
		if(F-E<=0)
			printf("This is impossible.\n");
		else{	
		FOR(i,1,F-E+1) d[i] = 1<<30;
		d[0] = 0;
		FOR(i,0,N){
			FOR(j,1,F-E+1){
				if(j-b[i]>=0)
					d[j] = min(d[j],d[j-b[i]]+a[i]);
			}
		}
		if(d[F-E]!=1<<30)
			printf("The minimum amount of money in the piggy-bank is %d.\n",d[F-E]);
		else
			printf("This is impossible.\n");
		}
	}	
	
	return 0;
} 