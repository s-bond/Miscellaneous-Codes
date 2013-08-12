#include <iostream>
#include <algorithm>
#define max 1000000
using namespace std;
int num[max+1], diff[max+1];
int main () {
	int n, k, count = 0, i, a, b;
	scanf("%d%d",&n,&k);
 	for ( i=0;i<k;i++ ){
		scanf("%d%d",&a,&b);
		a--;
		diff[a] ++;
		diff[b] --;
		}
	for ( i=0;i<n;i++ ){
		count   += diff[i];
		num[i]   = count;
	}
	sort ( num, num+n);
	printf("%d\n",num[n>>1]);
	
	return 0;
}


