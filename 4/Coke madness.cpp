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
#define GI ({long long int t;scanf("%lld",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%llu\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
/////////////////
using namespace std;
long long int sum, energy, x;
int main () {
	int i, j, k, c=1, t, n;
	t = GI;
	while ( c <= t){
		n = GI;
		sum = energy=0;
		FOR(i,0,n){
			x = GI;
			if( sum + x <= 0){
				energy += abs(sum+x)+1;
				sum = 1;
			}
			else sum+= x;
		}
		printf("Scenario #%d: %lld\n",c,energy);
		c++;
	}
	
	return 0;
}
