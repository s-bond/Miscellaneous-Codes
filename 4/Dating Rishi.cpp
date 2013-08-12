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
int a[100003], N;
LL ans, d;
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
		N = GI;
		FOR(i,1,N+1)a[i]=GI;
		ans=d=0;
		FOR(i,1,N+1){
			j = 1;
			while(j<i){if(a[j]>=a[i])break;j++;}
			d = (LL)((LL)(i-j)*(LL)(a[i]));
			ans = ans>d?ans:d;
			j = N;
			while(j>i){if(a[j]>=a[i])break;j--;}
			d = (LL)((LL)(j-i)*(LL)(a[i]));
			ans = ans>d?ans:d;
			}
		PLng(ans);
		}	 	
	return 0;
}