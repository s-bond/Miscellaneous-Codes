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
#define LEN 5300000
#define Max_k 2000001
class node{public: int num, index;LL weight; bool operator()(const node &a, const node &b){return a.weight>b.weight;}};
vi prime;
vector<LL> ans;
vector<node> V;
priority_queue<node,vector<node>,node> Q;
void sieve () {
	auto std::vector<bool> sieve(LEN,true);
	int i,j,i2;

	for(i=3;i*i<=LEN;i+=2) {
		while( sieve[i]==false )
			i+=2;
			j = i*(i-2);
			i2 = i<<1 ;
			while( ( j = i2+j ) <= LEN )
				sieve[j]=false;
		}
	prime.pb(2);	
	for(i=3;i<=LEN;i+=2)
		if( sieve[i] )
			prime.pb(i);
	}
void perform(){
	int i, j, k=0;
	node temp;
	FOR(i,0,prime.size()-1){
		temp.num   = prime[i];
		temp.index = i;
		temp.weight= (LL)(prime[i])*(LL)(prime[i+1]);
		Q.push(temp);		
		}
	while( k < Max_k){
		k ++;
		temp = Q.top();Q.pop();
		ans.pb(temp.weight);
		temp.index ++;
		if(temp.index+1<prime.size())
			temp.weight = (LL)(temp.num) * (LL)(prime[temp.index+1]);
		else
			break;
		Q.push(temp);
		}
	}
int main () {
	int i, j, k, t;
	t = GI;
	sieve(); perform();
	while(t--){
		k = GI;
		PLng(ans[k-1]);
		}
	
	return 0;
}