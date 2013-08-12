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
typedef vector<char> vc;
typedef map<int,int> mii;
typedef map<string,int> msi;
/////////////////
int a[100001], n, ans, Max;
int main () {
	int i, j, k, t, x;
	t = GI;
	while(t--){
		n = GI;
		mii smap;
		FOR(i,0,n) 
			{a[i] = GI;
			smap[a[i]]++;}
		k = a[0];
		x = Max = 1 ;
		FOR(i,1,n){
			if(k==a[i]){
				x++;
				}
			else{
				k = a[i];
				Max = Max > x ? Max : x;
				x = 1;
				}
			}
		Max = Max > x ? Max : x;
		ans = 0;
		int M 		   = Max;
		int Median_pos = n>>1;
		if(n&1)
			ans = Median_pos + 1 - M;						
		else{
			int Median_pos_2 = Median_pos - 1;
			if(M<Median_pos_2+1)
				ans = Median_pos + 1 - M;
			else if(M==Median_pos_2+1)
				ans = 1;			
			}
		if(ans<0)
				ans = 0;
		PInt(ans);
			
		}	
	return 0;
}
