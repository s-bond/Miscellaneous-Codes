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
int dp[1002][1002], expense[1002];
int main () {
	int i, j, k, t, sum, n, _case=1;
	t = GI;
	while(_case<=t){
	    n = GI; sum = GI;
		FOR(i,2,n+2)
			expense[i] = GI;
		dp[2][expense[2]] = expense[2];	
		FOR(i,2,n+2){
			FOR(j,1,sum+1){
				dp[i][j] = dp[i-1][j];
				if(j-expense[i]>=0&&i-2>=0)
					dp[i][j]=dp[i][j]>dp[i-2][j-expense[i]]+expense[i]?dp[i][j]:dp[i-2][j-expense[i]]+expense[i];
				}
			}
		k = dp[n+1][sum];		
		printf("Scenario #%d: %d\n",_case,k);
		_case++;
		Clear(dp);
		}
	return 0;
}