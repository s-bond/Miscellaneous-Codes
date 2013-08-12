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
class node{public:int up, down, left, right;};
int num[9]={1,2,3,4,5,6,7,8,9};
node a[10];
char ch[6];
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
		FOR(i,1,10){
			scanf("%s",&ch);
			a[i].up 	= ch[0]-48;
			a[i].right 	= ch[1]-48;
			a[i].down 	= ch[2]-48;
			a[i].left 	= ch[3]-48;
			}
		vi v(num,num+9);
		do{
			
			if(a[v[0]].right!=a[v[1]].left)continue;
			if(a[v[0]].down !=a[v[3]].up  )continue;
			
			if(a[v[1]].down !=a[v[4]].up  )continue;
			if(a[v[1]].right!=a[v[2]].left)continue;
			
			if(a[v[2]].down !=a[v[5]].up  )continue;
			
			if(a[v[3]].right!=a[v[4]].left)continue;
			if(a[v[3]].down !=a[v[6]].up  )continue;
			
			if(a[v[4]].right!=a[v[5]].left)continue;
			if(a[v[4]].down !=a[v[7]].up  )continue;
			
			if(a[v[5]].down !=a[v[8]].up  )continue;
			
			if(a[v[6]].right!=a[v[7]].left)continue;
			
			if(a[v[7]].right!=a[v[8]].left)continue;
			
			break;
			
			}while(next_permutation(v.begin(),v.end()));
			
			FOR(i,0,9) printf("%d",v[i]);
			printf("\n");
		}	
	return 0;
}