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
int X, N, a[200010];
vi :: iterator it;
LL ans;
int main () {
	int i, j, k, t, _case=1, y;
	t = GI;
	while(_case <= t){
		X = GI; N = GI;
		vector<vi> V(2010);
		FOR(i,0,N){
			a[i] = GI;
			V[a[i]].pb(i);
			}
		FOR(i,0,N){
			y = X - a[i];
			if(y<0 || V[y].size()==0)continue;
			it = lower_bound(V[y].begin(),V[y].end(),i+1);
			ans += (LL)(V[y].end()-it);
			}
		printf("%d. %lld\n",_case,ans);
		_case++;
		ans = 0;		
		}	
	return 0;
}