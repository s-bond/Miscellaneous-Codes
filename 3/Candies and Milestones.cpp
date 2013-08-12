#include <iostream>
#include <cstdlib>
#define max 10001
using namespace std;
int a[max];
int main () {
  int t, n, m, c_count, i, j, d, b_count, c_min, b_min,final;
  bool flag;
  scanf("%d",&t);
  while ( t-- ) {
    flag = true;
	scanf ("%d%d",&n,&m);
	b_count = n;b_min=n;c_min=c_count=0;
    for ( i=0;i<m;i++ ) scanf("%d",&a[i]);
	
	for ( i=1;i<m;i++ ) {
	   d = abs(a[i] - a[i-1]);
	   if ( a[i] > a[i-1] ) {c_count+= d;b_count-=d;}
	   else if ( a[i] < a[i-1] ) {c_count-=d;b_count+=d;}
	   else c_count--;
	   c_min = min(c_min,c_count);
	   b_min = min(b_min,b_count);
	    }
	final = 1 - c_min;
	if ( b_min - final < 0 ) flag=false;
	if ( flag ) printf("%d\n",final);
	else printf("-1\n");
	c_count = 0;
	}
  return 0;
  }
