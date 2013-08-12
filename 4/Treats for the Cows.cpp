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
int now[2005], prev[2005], a[2001], n;
int main () {
	int i, j, k;
	n = GI;
	FOR(i,0,n) a[i] = GI;
	FOR(i,1,n+1){
		FOR(k,0,i){
                now[k] = max(now[k],prev[k]+(i*a[n-i+k]));
                now[k+1]= max(now[k+1],prev[k]+(i*a[k]));
            }
            FOR(i,0,n+5)
            	prev[i] = now[i];
            	
			memset(now,0,sizeof(now));
        }
        PInt(*max_element(prev,prev+n+5));
	
	return 0;
}