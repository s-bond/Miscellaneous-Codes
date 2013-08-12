#include <iostream>
#include <algorithm>
#define max 1000000
using namespace std;
int a[max+1];
int main () {
	int i, maxx, n, k;
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&k);
	maxx = *max_element(a,a+k);
	printf("%d ",maxx);
	
	for ( i=1;i<=n-k;i++ ){
		if ( maxx != a[i-1] ){
			maxx = maxx > a[i+k-1] ? maxx : a[i+k-1];
		}
		else
		maxx = *max_element(a+i,a+i+k);

		if ( i != n-k ) printf("%d ",maxx);
		else
		printf("%d\n",maxx);
	}
	return 0;
}
