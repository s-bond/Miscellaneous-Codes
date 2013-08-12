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
int Counter[2002];
vector<vi>v(2002);
bool flag[2002], Global;
void _do(int x, int parent, int c){
	
	int i ;
	flag[x]=true;		
	FOR(i,0,v[x].size()){
		if(!flag[v[x][i]] && v[x][i]!=parent){
			flag[v[x][i]]=true;
			Counter[v[x][i]]=c+1;
			_do(v[x][i],x,c+1);
			}
		else if(flag[v[x][i]] && v[x][i]!=parent){
			int value = abs(Counter[x]-Counter[v[x][i]])+1;
			//cout<<endl<<i<<" "<<v[x][i]<<value<<endl;
			if(value!=1 && value&1){Global=false;return;}
			}	
		}	
	}
int main () {
	int i, j, k, t, s=1;
	t = GI;
	while( s <= t){
	N = GI; M = GI;
	FOR(i,0,M){
		j = GI;
	 	k = GI;
	 	v[j].pb(k); v[k].pb(j);
		}
	Global=true;
	FOR(i,1,N+1){
		if(!flag[i]&&v[i].size()){
			Counter[i]=1;
			_do(i,0,1);			
			}
		if(!Global)break;
		}
	//FOR(i,1,N+1){cout<<Counter[i]<<" ";}
	printf("Scenario #%d:\n",s);	
 	if(Global) printf("No suspicious bugs found!\n");
 	else	   printf("Suspicious bugs found!\n");
 	Clear(flag);Clear(Counter);
 	FOR(i,1,N+1){if(v[i].size())v[i].clear();}
    s++;
	 }
	return 0;
}