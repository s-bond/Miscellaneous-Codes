/* @author
 * bond, s_bond, sidhs
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
#include <assert.h>
#include <functional>
/////////////////
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({long long int t;scanf("%I64d",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%I64d\n",(a))
#define FOR(i,a,b) for((i)=(a);(i)<(b);i++)
#define FORR(i,b,a) for((i)=(b);(i)>=(a);(i)--)
#define FORV(i,v) for((i)=0;(i)<v.size();i++)
#define All(v) v.begin(),v.end()
#define BS(v,val) (lower_bound(All(v),val)-v.begin())
#define pb(a) push_back((a))
#define Clear(a) memset((a),0,sizeof(a))
#define SV(v) sort((v).begin(),(v).end())
#define SA(a,n) sort((a),(a)+(n))
#define mp make_pair
#define IT ::iterator
using namespace std;
typedef long long int LL;
typedef unsigned long long int ULL;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef map<int,int> mii;
typedef map<char,int> mci;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef vector<pii> vp;
typedef vector< vector<int> > vvi;
typedef pair <int, long > pil;
typedef pair <long, long > pll;
typedef set <int> si;
typedef set <LL> sl;
typedef priority_queue <int> PQ;
/////////////////
int N, M, K, ans;
vvi v(3001);
int _count[3001], _back[3001], branch[3001];
mii smap;
void _do(int x, int cnt, int par){
	int i;
	if(x != par){
	_count[x] = cnt;
	_back[x] = cnt;
	FORV(i,v[x]){
		if( _count[v[x][i]] != 0){
			_back[x] = min(_back[x], _count[v[x][i]]);
			}
		else{
			branch [x] ++;
			_do(v[x][i],cnt+1,x);
			if(_back[v[x][i]] < _count [x])
				_back [x] = min(_back[x],_back[v[x][i]]);
			else if(_back[v[x][i]] >= _count[x] && x!=0)
				smap[x]++;
			else if(x==0 && branch[0]>=2)
				smap[0]++;
			}
			}
		}
	}
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
		N = GI; M = GI; K = GI;
		FOR(i,0,M){
			j = GI; k = GI;
			v[j].pb(k);
			v[k].pb(j);
			}
		_do(0,1,-1);
		ans = smap.size();
		Clear(_count);Clear(_back);Clear(branch);
		smap.clear();
		PInt(ans*K);
		FOR(i,0,N) v[i].clear();
		}	
	return 0;
}