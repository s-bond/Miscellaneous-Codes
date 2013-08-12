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
int a[251], N, ans;
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
		N = GI;		
		ans = N;
		FOR(i,0,N){a[i]=GI;}
		int d[251]={0};
		FOR(j,0,N){
		k = 0;	
			FOR(i,0,j){
				if(a[i]+1==a[j]){
					k = max(k,d[i]);
					}				
				}
			d[j]=k+1;
			}
		PInt(ans-*max_element(d,d+251));		
		}	
	return 0;
} 