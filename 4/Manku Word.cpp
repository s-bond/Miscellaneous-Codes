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
LL N;
char ch[5]={'m','a','n','k','u'};
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
		N = GL;
		vector<char> v;
		while(N>=1){
			j = N%5;
			if(j==0) {j = 5;N--;}
			j--;
			v.pb(ch[j]);
			N/=5ll;
			}
		for(i=v.size()-1;i>=0;i--)
			printf("%c",v[i]);
		printf("\n");
		}	
	return 0;
}