#include <iostream>
using namespace std;
int main () {
	int t, n, row;
	scanf("%d",&t);
	while ( t-- ){
		scanf("%d",&n);
		if(n==1) {printf("poor conductor\n");continue;}
		if((n-1)%5==0) row = (n-1)/5;
		else  		   row = ((n-1)/5)+1;
		if      ( (n-2)%10== 0||(n-11)%10==0 ) printf("%d W L\n",row);
		else if ( (n-3)%10==0 ||(n-10)%10==0 ) printf("%d A L\n",row);
		else if ( (n-4)%10==0 || (n-9)%10==0 ) printf("%d A R\n",row);
		else if ( (n-5)%10==0 || (n-8)%10==0 ) printf("%d M R\n",row);
		else if ( (n-6)%10==0 || (n-7)%10==0 ) printf("%d W R\n",row);
	}
}