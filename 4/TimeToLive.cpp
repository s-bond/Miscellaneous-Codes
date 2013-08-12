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
int N, ans, Trick;
vector<vi>v(100010);
bool flag[100010];
void _do(int x, int parent, int c){
	
	int i ;
	FOR(i,0,v[x].size()){
		if(!flag[v[x][i]] && v[x][i]!=parent){
			flag[v[x][i]]=true;
			if(ans<c+1){Trick=v[x][i];ans=c+1;}
			_do(v[x][i],x,c+1);
			}	
		}	
	}
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
	N = GI;
	FOR(i,0,N-1){
		j = GI;
	 	k = GI;
	 	v[j].pb(k); v[k].pb(j);
		}
	ans = 0;
	Clear(flag);
	flag[0]=true;
	_do(0,0,0);
	Clear(flag);
	flag[Trick]=true;
	_do(Trick,0,0);
	if(ans&1)
		PInt((ans>>1)+1);
	else
		PInt(ans);
	FOR(i,0,N)v[i].clear();
	}
	return 0;
}