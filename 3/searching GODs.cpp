#include <iostream>
#include <string.h>
#define max 10010
char a[max], b[10], res[max];
using namespace std;
int main () {
	int len, i, j, rounds, x, y, z, index, maloo;
	while ( scanf("%d",&len)!= EOF ){
		scanf("%s%s",&a,&b);
		scanf("%d",&rounds);
		maloo = 0;
		for(i=0;i<rounds;i++)  {
			if( maloo%2 == 0 ){
			for(j=0;j<len;j++) {
				x = j-1; y = j; z = j+1;
				if(x<0)    x = len-1;
				if(z==len) z = 0;
				index = 4*(a[x]-48)+2*(a[y]-48)+(a[z]-48);
				res[j] = b[index];
			}
			res[j] = '\0';
				}
			else{
				for(j=0;j<len;j++) {
				x = j-1; y = j; z = j+1;
				if(x<0)    x = len-1;
				if(z==len) z = 0;
				index = 4*(res[x]-48)+2*(res[y]-48)+(res[z]-48);
				a[j] = b[index];
			}
			a[j] = '\0';
			}			
		maloo++;
		}
		if(maloo%2) printf("%s\n",res);
		else 		printf("%s\n",a);
	}
}

