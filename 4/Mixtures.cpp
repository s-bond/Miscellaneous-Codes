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
int a[101], sum[101][101], dp[101][101];
int main()
{
    int i, j, k, s, d, n, y, x;
    while(scanf("%u",&n)!=EOF)
    {
        FOR(i,0,n)a[i]=GI;
        Clear(dp);Clear(sum);
        FOR(i,0,n){        	
            s = a[i];
            sum[i][i] = s;
            FOR(j,i+1,n){
            	sum[i][j] = s + a[j];
            	if(sum[i][j]>=100)sum[i][j]%=100;
            	s = sum[i][j];
                }
        	}  		   
	          FOR(k,1,n){
			  	for(i=0;i+k<n;i++){
				    x = 1<<30;
				  	FOR(j,i,i+k){				  		
					  	y = dp[i][j] + dp[j+1][i+k] + sum[i][j]*sum[j+1][i+k];
					  	x = min(x,y);
						  }
 					    dp[i][i+k] = x;
					  }
				  }
			 
			 PInt(dp[0][n-1]);	        
    }
    
    return 0;
}