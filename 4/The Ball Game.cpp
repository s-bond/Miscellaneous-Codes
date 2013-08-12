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
#define F float
/////////////////
using namespace std;

int main () {
	int t;
     t = GI;
 	while( t-- ){
	 	F n, ans, one=1.0;
	 	scanf("%f",&n);
	 	ans = (n-one)/n + ((one/n)* (one/(n+one)));
	 	printf("%0.8f\n",ans);
	 }
	
	return 0;
}