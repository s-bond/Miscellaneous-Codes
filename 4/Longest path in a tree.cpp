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
#define x first
#define y second
using namespace std;
/////////////////
int N, M, ans, Trick;
vector<vi>v(10001);
bool flag[10001];
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
	N = GI;
	FOR(i,0,N-1){
		j = GI;
	 	k = GI;
	 	v[j].pb(k); v[k].pb(j);
		}
	flag[j]=true;
	_do(j,0,0);
	Clear(flag);
	ans = 0;
	_do(Trick,0,0);
	PInt(ans);	
	 	
	return 0;
}