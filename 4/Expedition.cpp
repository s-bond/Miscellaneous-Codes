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
int N, P, L, ans;
bool Global;
class node{
	public:
	int dist, fuel;
	bool operator()(const node &a,const node &b){return a.dist<b.dist;}
	};
node a[10002];
int main () {
	int i, j, k, t, fuel_left, dist_left;
	t = GI;
	while( t-- ){
		N = GI;
		a[0].dist=a[0].fuel=0;
		FOR(i,1,N+1){
			a[i].dist=GI;
			a[i].fuel=GI;
			}
		L = GI; P = GI;
		sort(a,a+N+1,node());
		i = N; ans = 0;
		Global = true;
		priority_queue <int> Q;
		fuel_left = P; dist_left = L - a[i].dist;
		fuel_left -= dist_left;
		if(fuel_left<0){PInt(-1);continue;}
		
		Q.push(a[i].fuel); 
		while(!Q.empty() && i>=1 ){			
			dist_left = a[i].dist - a[i-1].dist;
			fuel_left -= dist_left;
			
				while(fuel_left<0 && !Q.empty()){
					fuel_left += Q.top();
					//cout<<"\nFilled with "<<Q.top()<<endl;
					Q.pop();
					ans ++;
					if(Q.empty() && fuel_left < 0)Global=false;
					}				
			i--;
			Q.push(a[i].fuel);
			}
		if(i!=0)Global=false;
		if(Global)
			PInt(ans);
		else
			PInt(-1);	
		}
	return 0;
}