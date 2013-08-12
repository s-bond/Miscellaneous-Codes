#include <iostream>
using namespace std;
int main () {

int n,a[5001],b[5001]={0},c,result = 0,i,j,d;

	scanf ("%d",&n);
	for ( i=1; i <= n; i++ )
	scanf ("%d",&a[i]);
	
	if ( n == 2 ) result = 1;
	else {
	
	for ( i=2; i <= n; i++ ){
	if ( ! b[i] ){
	c 	 = a[i];
	d	 = a[i] - 1;
		for ( j= i+1; j <= n ; j++ ){
		
			if ( (a[j] - c) % d == 0 && b[j] != 1 ){
				b[j] = 1;
			}
		}
		}
	}
	for ( int i=2;i<=n;i++ )
	if (  !b[i] ) result ++;
	
	}

	printf ( "%d\n",result );
return 0;
}
