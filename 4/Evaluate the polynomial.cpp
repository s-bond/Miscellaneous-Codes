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
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({long long int t;scanf("%lld",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%lld\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define pb(a) push_back((a))
#define Clear(a) memset((a),0,sizeof(a))
#define SV(v) sort((v).begin(),(v).end())
#define SA(a,n) sort((a),(a)+(n))
using namespace std;
typedef long long int LL;
typedef unsigned long long int ULL;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<char> vc;
typedef map<int,int> mii;
typedef map<string,int> msi;
/////////////////
int n;
bool flag;
int main () {
	int i, j, k, t, _case=1, _index;
	LL in, _ans, x, sum;
	n = GI;
	while(n!=-1){
		
		vl coff;
		sum = 0;
		FOR(i,0,n+1){
			in = GL;
			coff.pb(in);
			sum += in;
			}
		k = GI;
		flag=false;
		while( k-- ){
		in = GL;
		_index = 0;
		_ans   = 0;
		while(_index<n){
			_ans = (_ans + coff[_index])*in;			
			_index++;
			}
		/*else{
			FOR(i,1,n+1)
				if(i&1)
					_ans += (c[i]*in);
				else
					_ans += (c[i]*abs(in));
			}*/
		_ans += coff[n];
		if(!flag)
			{printf("Case %d:\n",_case);flag=true;}
			PLng(_ans);
		}
		_case++;
		n = GI;
		}
	
	return 0;
}