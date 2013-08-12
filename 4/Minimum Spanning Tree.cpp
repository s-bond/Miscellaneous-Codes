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
class node{public: int x, y, weight; bool operator()(const node &a,const node &b){return a.weight>b.weight;}};
bool done[10001], flag[10001], Global;
priority_queue <node , vector<node> , node> Q;
vector<vi> a(10001);
int N, M, counter;
LL W;
void _do(int x, int parent){
		int i;
		flag[x] = true;
		FOR(i,0,a[x].size())
			if(!flag[a[x][i]] && a[x][i]!=parent)
				_do(a[x][i],x);			
			else if(flag[a[x][i]] && a[x][i]!=parent){
				Global = false;
				return ;
			}
	}
int main () {
	int i, j, k, t;
	node Node;
	N = GI; M = GI;
	FOR(i,0,M){
		Node.x = GI; Node.y = GI; Node.weight = GI;
		Q.push(Node);
		}
	
	while(!Q.empty() && counter	 <= N-1){
		Node = Q.top(); Q.pop();
		if(!done[Node.x]||!done[Node.y]){
			 if(!done[Node.x]){done[Node.x] = true;}
			 if(!done[Node.y]){done[Node.y] = true;}
			 a[Node.x].pb(Node.y);
			 a[Node.y].pb(Node.x);
			 counter++;
			 W += (LL)(Node.weight); 
			}
		else{
			a[Node.x].pb(Node.y);
			a[Node.y].pb(Node.x);
			Global = true;
			Clear(flag);
			_do(Node.x,0);
			if(!Global){
				a[Node.x].pop_back();
			    a[Node.y].pop_back();
				}
			else{
				counter++;
				W += (LL)(Node.weight);
				}
			}
		}
	PLng(W);
	return 0;
}