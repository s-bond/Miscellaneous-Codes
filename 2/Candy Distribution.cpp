#include <iostream>
#include <algorithm>
#define Max 100000
unsigned long long int c[Max+1], p[Max+1];
using namespace std;
struct sid {
  inline bool operator () (const unsigned long long int A, const unsigned long long int B) const {
    return A > B;
  }
};
int main () {
	int n, i, j;
	unsigned long long int sum=0;
	scanf("%d",&n);
	while ( n ) {
		for ( i=0;i<n;i++ )
			scanf("%llu",&c[i]);
		for ( i=0;i<n;i++ )
			scanf("%llu",&p[i]);
		sort(p,p+n);
		sort(c,c+n,sid());
	
	for ( i=0;i<n;i++ )
		sum = sum + p[i]*c[i];;
		
	printf("%llu\n",sum);
	sum = 0;
	scanf("%d",&n);
	}
	return 0;
}
