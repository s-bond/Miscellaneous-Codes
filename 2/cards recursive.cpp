#include <iostream>
using namespace std;
long int sid ( int x ) {
	if ( x == 2 ) return 7;
	else return sid(x-1)+(3*x-1);
}
int main () {
	int t, num;
	long int ans;
	scanf("%d",&t);
	while ( t-- ) {
		scanf("%d",&num);
		if ( num == 1 ) ans = 2;
		else
		ans = sid ( num ) % 1000007;
		printf("%ld\n",ans);
	}
	return 0;
}
