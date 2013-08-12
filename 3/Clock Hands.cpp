/* ~
 * Siddharth Maloo
 * IIIT-A
*/
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <string.h>
#include <string>
#include <math.h>
/////////////////
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define ULL unsigned long long int
/////////////////
using namespace std;
int main () {
 int hh1, hh2, mm1, mm2, t, time1, time2;
 t = GI;
 while( t-- ){
               
                scanf("%d:%d",&hh1,&mm1);
                scanf("%d:%d",&hh2,&mm2);
                      time1=hh1*60+ mm1;
                      time2=hh2*60 +mm2;                
                cout<<((time2*11)/720 - (time1*11)/720) << endl;                
                        }
	return 0;
}
