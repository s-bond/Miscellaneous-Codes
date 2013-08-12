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
#include <bitset>
#include <set>
/////////////////
#define ULL long long int
#define GInt ({int t;scanf("%d",&t);t;})
#define GL ({long long int t;scanf("%lld",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%lld\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define mod 1000000007
inline int GI ( void )
{
int Ret = 0;
char Ch;
while ( isdigit ( Ch = getchar() ) ) Ret = Ret * 10 + ( Ch - '0' );
return Ret;
}
/////////////////
using namespace std;

int main () {
	int i, j, k, t, a, b, c, n, x, y;
    t = GI();
    while(t--){
    	priority_queue <int> Min, Max;
    	//scanf("%d%d%d%d",&a,&b,&c,&n);
    	a=GI();b=GI();c=GI();n=GI();
		ULL ans=1;
    	Min.push(1);
    	x=1;
    	for(i=2;i<=n;i++){
    		
	    	x=((((ULL)a*(ULL)Min.top()))+(ULL)((ULL)b*(ULL)i)+(ULL)c)%mod;
	    	
	    	if(i%2==0){
	    		y = Min.top();
	    		if(y>x){
		    		Min.pop();
		    		Min.push(x);
		    		Max.push(-y);
		    	}
		    	else
		    		Max.push(-x);
	    	}
	    	
	    	else{
	    		y = -Max.top();
	    		if(x > y){
		    		Max.pop();
		    		Max.push(-x);
		    		Min.push(y);
		    	}
		    	else
		    		Min.push(x);
	    	}
	    	ans +=(ULL)x;
	    }
    	PLng(ans);
    }
	
	return 0;
}