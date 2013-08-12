/* @
 * Siddharth Maloo
*/
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <cstring>
#include <time.h>
#include <fstream>
/////////////////
#define ULL unsigned long long int
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%llu\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
/////////////////
using namespace std;
int N, I;
char M[2012], J[2012];
bool flag;
int main () {
	int t, len1, len2;
    t = GI;
    while ( t-- ){
    	flag = true;
		scanf("%d%s%d%s",&N,&M,&I,&J);
		len1 = strlen(M);
		len2 = strlen(J);
    	if( N%2==0 || (M[len1-1]-48)%2 == 0 ) flag=false;
    	else{
	    	if( I%2 ){
	    		if( (J[len2-1]-48)%2 == 0 )
	    			flag=false;
					}
   			else
   				if( (J[len2-1]-48)%2 )
   					flag=false;
	    }
		if( flag )
			printf("Possible.\n");
		else
			printf("Impossible.\n");    	
    }	
	return 0;
}