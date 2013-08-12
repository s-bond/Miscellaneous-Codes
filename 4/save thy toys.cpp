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
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({long long int t;scanf("%lld",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%lld\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define pb(a) push_back((a))
#define Clear(a) memset((a),0,sizeof(a))
#define SV(v) sort((v).begin(),(v).end())
#define SA(a,n) sort((a),(a)+(n))
using namespace std;
typedef long long int LL;
typedef unsigned long long int ULL;
typedef vector<int> vi;
typedef vector<char> vc;
typedef map<int,int> mii;
typedef map<string,int> msi;
/////////////////
LL a[100010], dp[1000010];
int n;
LL _do(int x){
	LL p, q, r;
	if(x>n)
		return 0;
	else if(dp[x]!=0)
		return dp[x];
	else{
		p     = a[x] + _do(x+2);
		q 	  = a[x] + a[x+1] + _do(x+4);
		r 	  = a[x] + a[x+1] + a[x+2] + _do(x+6);
		dp[x] = max(p,max(q,r));
		}
	return dp[x];
	}
int main () {
	int i, j, k, t ;
	t = GI;
	while(t--){
		n = GI;
		FOR(i,0,n)
			a[i] = GL;						
		PLng(_do(0));
		Clear(a);Clear(dp);
		}
	return 0;
}