/* ~
 * Siddharth Maloo
 * IIIT-A
*/
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <string.h>
#include <string>
#include <math.h>
/////////////////
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define ULL unsigned long long int
#define Max 1028
/////////////////
using namespace std;
int tree[Max][Max], N;
int a[Max][Max];
void update(int x , int y , int val){
	int y1;
	while (x <= Max){
		y1 = y;
		while (y1 <= Max){
			tree[x][y1] += val;
			y1 += (y1 & -y1); 
		}
		x += (x & -x); 
	}
}
int read(int idx, int idy){
	int sum = 0, d;
	while (idx > 0){
		d = idy;
		while ( d > 0){
		sum += tree[idx][d];
		d -= (d & -d);
		}
	idx -= (idx & -idx);
		}
	return sum;
}

int main () {
	int i, j, k, c=0, t, x1, y1, x2, y2, val;
	char ch[10];
	t = GI;
	while ( t-- ){
		N = GI;N++;
		scanf("%s",&ch);
		while(ch[0]!='E'){
			if( ch[1]=='E' ){
				x1 = GI;y1 = GI; val = GI;
				
				if(a[x1][y1] == 0)
				update(x1+1,y1+1,val);
				else
				update(x1+1,y1+1,val-a[x1][y1]);
					
			    a[x1][y1] = val;
				}
			else{
				x1 = GI;y1 = GI;
				x2 = GI;y2 = GI;
				c = 0;
				if( x1==0 && y1==0 ) c = read(x2+1,y2+1);
				else
				c = read(x2+1,y2+1)+read(x1,y1)-read(x1,y2+1)-read(x2+1,y1);
				
				printf("%d\n",c);
				}
				scanf("%s",&ch);
			}
           cout << endl;
			memset(tree,0,sizeof(tree));
			memset(a,0,sizeof(a));
			memset(*tree,0,sizeof(*tree));
			memset(*a,0,sizeof(*a));
		}	
	return 0;
}
