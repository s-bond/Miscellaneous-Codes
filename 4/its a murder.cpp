/* ~
 * Siddharth Maloo
*/
#include <iostream>
#include <cstring>
/////////////////
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define ULL unsigned long long int
#define Max 1000001
/////////////////
using namespace std;
ULL tree[Max], a[Max];
ULL read(int idx){
	ULL sum = 0;
	while (idx > 0){
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}
void update(ULL idx , ULL val){
	while (idx <= Max){
		tree[idx] += val;
		idx += (idx & -idx);
	}
}
int main () {
	int i, t, n, x;
	ULL c=0;
	scanf("%d",&t);
	while ( t-- ){
		scanf("%d",&n);
		FOR(i,0,n) 
			scanf("%llu",a+i);
			
			FOR(i,0,n) {
			if(a[i]!=0){
				c += read(a[i]-1);
				update(a[i],a[i]);}
			}
		printf("%llu\n",c);
		memset(tree,0,sizeof(tree));
		c=0;
		}
	
	return 0;
}