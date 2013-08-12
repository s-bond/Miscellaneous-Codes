#include <iostream>
#include <string.h>
#define max 1000001
using namespace std;
bool num[max];
int prime[max/2], x[max/2], y[max/2];
bool one[max/2], two[max/2];
void gen_prime(){
	long long int i, j, count=0, t=0;
	for ( i=2;i<max;i++ ) {    
	if ( !num[i]) { num[i]=true;prime[t]=i;t++;}
	    for ( j=i*i;j<max;j+=i ){
		   num[j] = true;
		   }
	}
}
int main () {
	gen_prime();
	int a, b, i, j, c, on, tw, cases=1, p_count, d, c1, c2;
	scanf("%d%d",&a,&b);
	while ( a && b ){
		i = j = on = tw = c = c1 = c2  = 0;
		while ( a!=1) { if(a%prime[i]==0) {
			x[i]++;a/=prime[i];
			if(!one[i]) {one[i]=true;}} 
			else i++;
			c1++;
			}
		while ( b!=1) { if(b%prime[j]==0) {
			y[j]++;b/=prime[j];
			if(!two[j]) {two[j]=true;}}
			else j++;
			c2++;
			}
		c1 = c1 > c2 ? c1 : c2;
		for ( i=0;i<=c1;i++ ) if(one[i]||two[i])on++;
		for ( i=0;i<=c1;i++ ) { d =x[i]-y[i]; if(d<0)d*=(-1);c+=d; }
		printf("%d. %d:%d\n",cases,on,c);
		//cout << cases<<". "<<on<<":"<<c<<endl;		
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		memset(one,0,sizeof(one));
		memset(two,0,sizeof(two));
		cases++;
		scanf("%d%d",&a,&b);
	}
	//system("pause");
	return 0;
   }
