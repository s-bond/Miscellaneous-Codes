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
/////////////////
#define ULL unsigned long long int
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%llu\n",(a))
#define FOR(i,a,b) for( i=(int)(a);i<(int)(b);i++)
/////////////////
using namespace std;
int b[100001], c[100001];
int dp_function( int *a, int n){
	int dp[n+2];dp[n+1]=dp[n]=0;
	for(int i=n-1;i>=0;i--)
		dp[i] = max(dp[i+2]+a[i],dp[i+1]);
	return dp[0];
}
int main () {
	int i, j, k, row, column;
    while( scanf("%d%d",&row,&column) && row|column!=0 ){
    	
    	FOR(i,0,row){
	    	FOR(j,0,column) b[j]=GI;
			c[i] = dp_function(b,column);				    	
	    }
    	k = dp_function(c,row);
    	PInt(k);
    }
	
	return 0;
}