/* @
 * bond, sidhs
*/
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <bitset>
#include <set>
#include <cmath>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <cstdio>
/////////////////
#define LL long long int
#define ULL unsigned long long int
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({long long int t;scanf("%lld",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%lld\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define vi vector<int>
#define pb(a) push_back((a))
#define Clear(a) memset((a),0,sizeof(a))
#define SV(v) sort((v).begin(),(v).end())
#define SA(a,n) sort((a),(a)+(n))
using namespace std;
/////////////////
int dp[101][501], expense[101], Value[101];
int main () {
	int i, j, k, t, sum, n;
	while(1){
		sum = GI; n = GI;
		if(!sum && !n)break;
		FOR(i,1,n+1){
			expense[i] = GI;
			Value[i]   = GI;
			}
		FOR(i,1,n+1){
			FOR(j,1,sum+1){
				dp[i][j] = dp[i-1][j];
				if(j-expense[i]>=0)
					dp[i][j]=max(dp[i][j],dp[i-1][j-expense[i]]+Value[i]);
				}
			}
		k = dp[n][sum];
		FOR(i,1,sum+1){
			if(dp[n][i]==k)
				{j=i;break;}
			}
		printf("%d %d\n",j,k);
		Clear(dp);
		}
	return 0;
}