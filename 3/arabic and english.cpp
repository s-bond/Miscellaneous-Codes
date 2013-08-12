#include <iostream>
using namespace std;
int main () {
int t,n,j,i,k,flag;char c[101][11];
scanf ( "%d",&t );
while ( t -- ){
flag = 0;
scanf ("%d",&n);
	for ( i=0;i<n;i++ )
		{
			scanf ( "%s",c[i]);
			if ( c[i][0] != '#' )
			{flag = 1;
			j = i;}
		}
	if ( flag ) {
		for ( k = j + 1; k < n ; k++ )
		printf ( "%s ",c[k] );
		if ( j == 0 )
		printf ( "%s\n",c[j] );
		if ( j != 0 )
		printf ( "%s ",c[j] );
		if ( j!= 0){
		for ( k = 0; k < j - 1 ; k++ )
		printf ( "%s ",c[k] );
		printf ( "%s\n",c[j-1] );}
	}
	else if ( ! flag ){
	for ( k = 0; k < n - 1 ; k++ )
		printf ( "%s ",c[k] );
		printf ( "%s\n",c[n-1] );}
}
return 0;
}
