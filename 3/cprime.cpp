#include <iostream>
#include <vector>
#include <string.h>
#include <math.h>
#define LEN 99999990
#define M 5761457
using namespace std;
int prime[M];
void sieve () {

	auto std::vector<bool> sieve(LEN,true);
	long int i,j,k,i2;
	for(i=3;i*i<=LEN;i+=2) {
	 while( sieve[i]==false )
		i+=2;
		j = i*(i-2);
		i2 = i<<1 ;
		while( ( j = i2+j ) <= LEN )
		sieve[j]=false;
	}
	prime [0] = 2 ;
		for(i=3,j=1,k=1;i<=LEN;i+=2)
			if( sieve[i] )
			prime [k++] = i ;
}

int main()
{
	int n;
	float c1, c2, ans;

	sieve();
	
	int mid;
	while ( 1 ) {		
		scanf("%d",&n);
		if(n==0)
		break;
        /////////////////bs/////////
	int	high=M-1, low=0;
		mid = (high+low)/2;
		do{
			if( prime[mid] > n ) {high = mid - 1;}
			else if ( prime[mid] < n ) {low=mid+1;}
			else if ( prime[mid]==n) break;
			mid = (high+low)/2;
			}while(low<=high);	
		/////////////////////////////	
		c1 = float(mid)+1.0;
		c2 = float(n)/float(log(float(n)));
		
		if(c1>c2)
		ans = ((c1-c2)/c1)*100.00;
		else
		ans = ((c2-c1)/c1)*100.00;
		
		printf("%0.01f\n",ans);
		}
	return 0;
}

