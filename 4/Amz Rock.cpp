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
/////////////////
#define ULL unsigned long long int
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%llu\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)
inline int GI ( void )
{
int Ret = 0;
char Ch;
while ( isdigit ( Ch = getchar() ) ) Ret = Ret * 10 + ( Ch - '0' );
return Ret;
}
/////////////////
using namespace std;
int choose(int n, int k) {
	
	//cout<<n<<" "<<k<<endl;
    if(k>n) return 0;

	int r = 1;
    for (int d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main () {
	int i, ans, t, n;
	t = GI();
	while ( t-- ){
		n = GI();
		ans = 0;
			FOR(i,1,(n+1)/2)
				ans += choose(n-i+1,i);
			ans = ans + 1;
		PInt(ans);
	} 
	
	return 0;
}