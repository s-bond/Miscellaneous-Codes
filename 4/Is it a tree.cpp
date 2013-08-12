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
int N, M;
vector<vi>v(10001);
bool flag[10001], Global;
void _do(int x, int parent){
	
	int i ;
	FOR(i,0,v[x].size()){
		if(!flag[v[x][i]] && v[x][i]!=parent){
			flag[v[x][i]]=true;
			_do(v[x][i],x);
			}	
		else if(flag[v[x][i]] && v[x][i]!=parent){
			Global=false;
			return;
			}
		}	
	}
int main () {
	int i, j, k, t;
	Global=true;
	N = GI; M = GI;
	FOR(i,0,M){
		j = GI;
	 	k = GI;
	 	v[j].pb(k); v[k].pb(j);
		}
	flag[j]=true;
	_do(j,0);
	t = 0;
	FOR(i,0,N+1)if(flag[i])t++;
	if(t==N && Global)
	printf("YES\n");
	else
	printf("NO\n");
	 	
	return 0;
}