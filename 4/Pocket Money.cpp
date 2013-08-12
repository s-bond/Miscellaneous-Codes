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
int a[101], n, sign, dp[101][101];
char ch[101], ope[101];
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
		scanf("%s",&ch);
		n = sign = 0;
		FOR(i,0,strlen(ch)){
			if(ch[i]!='+'&&ch[i]!='*')
				a[n++] = ch[i]-48;
			else
				ope[sign++] = ch[i];
			}
		////// Max /////
		Clear(dp);
		FOR(i,0,n)
			dp[i][i]=a[i];
		FOR(k,1,n){
			  	for(i=0;i+k<n;i++){
				  	FOR(j,i,i+k){
					  if(ope[j]=='+')				  		
					  	dp[i][i+k] = max(dp[i][i+k],dp[i][j]+dp[j+1][i+k]);
					  else
					  	dp[i][i+k] = max(dp[i][i+k],dp[i][j]*dp[j+1][i+k]);	  
						  }
					  }
				  }
		printf("%d ",dp[0][n-1]);
  		////////////////////////////////////////////////////////////////////////
  		///// Min ///////
  		FOR(i,0,n)
  			FOR(j,0,n)
  				if(i==j) dp[i][i]=a[i];
  				else	 dp[i][j]=1<<30;
		FOR(k,1,n){
			  	for(i=0;i+k<n;i++){
				  	FOR(j,i,i+k){
					  if(ope[j]=='+')				  		
					  	dp[i][i+k] = min(dp[i][i+k],dp[i][j]+dp[j+1][i+k]);
					  else
					  	dp[i][i+k] = min(dp[i][i+k],dp[i][j]*dp[j+1][i+k]);	  
						  }
					  }
				  }
		printf("%d\n",dp[0][n-1]);
		////////////////////////////////////////////////////////////////////////
		}	
	return 0;
}