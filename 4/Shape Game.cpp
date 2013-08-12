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
bool a[302][302], flag;
int check[302], counter;
int N, M;
vi v;
void _do(int x){
	int i;
	FOR(i,1,301){
		if(a[x][i]){
			a[x][i] = a[i][x] = false;
			_do(i);
			}
		}
	v.pb(x);
	}
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
		N = GI;
		flag = true; M = 0;
		while(true){
			i = GI; j = GI;
			if(i!=-1 && j!=-1){
				a[i][j] = a[j][i] = true;
				check[i]++;check[j]++;
				M++;
				}
			else
				break;
			}
		counter = 0;
		FOR(i,1,301){
			if(check[i]&1){
				counter++;
				}
			}
		if(counter > 1) flag=false;
		if(flag) _do(N);
		if(v.size()-1 != M) flag = false;
		if(flag) printf("YES\n");
		else	 printf("NO\n");
		
			/*FOR(i,0,v.size())
			cout<<v[i]<<" ";
			cout<<endl;*/
			
			v.clear();
			Clear(a);
			Clear(check);
		}	
	return 0;
}