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
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define pb(a) push_back((a))
#define Clear(a) memset((a),0,sizeof(a))
#define SV(v) sort((v).begin(),(v).end())
#define SA(a,n) sort((a),(a)+(n))
#define mp make_pair
using namespace std;
typedef long long int LL;
typedef unsigned long long int ULL;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef vector<pii> vp;
/////////////////
#define num first
#define freq second
#define MaxN 1000010
class node {public:pii left, right, best;};
node tree[4*MaxN];
int a[MaxN];
node combine(node L, node R){
	node temp;
	if(L.left.num == R.left.num)
		temp.left = mp( L.left.num, L.left.freq + R.left.freq );				
	else
		temp.left = mp( L.left.num, L.left.freq );
	
	if(R.right.num == L.right.num)
		temp.right = mp( R.right.num, R.right.freq + L.right.freq );
	else
		temp.right = mp( R.right.num, R.right.freq );
	
	if(L.best.num == R.best.num)
		temp.best = mp( L.best.num, L.best.freq + R.best.freq );
	else{
		 if( L.right.num == R.left.num){
		 	if( L.right.freq+R.left.freq >= L.best.freq &&L.right.freq+R.left.freq >= R.best.freq  )
		 		temp.best = mp ( L.right.num, L.right.freq+R.left.freq );
	 		else if ( L.best.freq >= L.right.freq + R.left.freq && L.best.freq >= R.best.freq )
	 			temp.best = mp ( L.best.num, L.best.freq );
 			else
 				temp.best = mp ( R.best.num, R.best.freq );
			 }
		 else{
 		   if( L.best.freq >= R.best.freq )
 		   		temp.best = mp ( L.best.num, L.best.freq );
           else
           		temp.best = mp ( R.best.num, R.best.freq );
			 }
		}
	return temp;		
	}
node make_it( int x ){
	node temp;
	temp.left = mp(x,1);
	temp.right= mp(x,1);
	temp.best = mp(x,1);
	return temp;
	}
void INIT( int v, int b, int e ){
	if( b == e )
		tree [ v ] = make_it( a[b] );
	else{
		int tm = (b+e)/2;
		INIT(2*v, b, tm);
		INIT(2*v+1, tm+1, e );
		tree[ v ] = combine ( tree[ 2*v ], tree[ 2*v+1 ] );
		}
	}
node query ( int v, int b, int e, int i, int j ){
	
	if(b==i && e==j)
		return tree [ v ];
	int tm = (b+e)/2;
	if(j<=tm )
		return query(2*v, b, tm, i, j);
	if(i>tm)
		return query(2*v+1, tm+1, e, i, j);
	return combine ( query(2*v, b, tm, i, tm ), query(2*v+1, tm+1, e, tm+1, j ) );	
	}
int N, M, K;
int main () {
	int i, j, k, t;
	N = GI;
	while(N){
	t = GI;
	FOR(i,0,N) a[i] = GI;
	INIT(1,0,N-1);
	while( t--){
		i = GI; j = GI;
		i--; j--;
		node t = query(1,0,N-1,i,j);
		//cout<<t.best.num<<endl<<t.best.freq<<endl;
		PInt(t.best.freq);
		}
	N = GI;
	Clear(tree);	
	}
	
	return 0;
}