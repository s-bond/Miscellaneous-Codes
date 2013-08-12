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
bool sid[10000][9000],flag;
int main () {
	int i, j, k, c=1, t, n;
 	t = GI;
 	while ( c<=t ){;
		n = GI;
	 	k = GI;
	 	flag = true;
	 	while ( k-- ){
	 	 i = GI; j = GI;
	 	 if(flag){ 	 		 	 	
		 i --; j-= 1000;
		 if( !sid[i][j]) sid[i][j] = true;
		 else flag=false;
	 	 	}
	 	}
		printf("Scenario #%d: ",c);
		if(flag)
			printf("possible\n");
		else
			printf("impossible\n");
		c++;
		memset(sid,0,sizeof(sid[0])*n);
		
	 }
 
	return 0;
}