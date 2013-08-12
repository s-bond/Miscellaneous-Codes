#include <iostream>
using namespace std;
char c[1010];
int main () {
	int i, count=0, count1=0;
	bool capital=true, small=false;
	while ( scanf("%s",&c)!=EOF){
		i = 1, count = 0;
		if ( c[0] > 'Z' ) count++;		
		while ( c[i] != '\0' ){
			if ( small ) {
				if ( c[i] > 'Z' ) count++;
				small   = false;
				capital = true;
			}
			else if ( capital ){
				if ( c[i] < 'a' ) count++;
				capital  = false;
				small	 = true;
			}
			i++;
		}
		capital = false; small = true;
		i = 1, count1 = 0;
		if ( c[0] < 'a' ) count1++;		
		while ( c[i] != '\0' ){
			if ( small ) {
				if ( c[i] > 'Z' ) count1++;
				small   = false;
				capital = true;
			}
			else if ( capital ){
				if ( c[i] < 'a' ) count1++;
				capital  = false;
				small	 = true;
			}
			i++;
		}
		count = count < count1 ? count : count1;
		printf("%d\n",count);
		capital = true; small=false;
	}
	return 0;
}
