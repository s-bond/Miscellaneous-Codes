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
char ch[25];
bool flag;
ULL ans;
int main () {
	int i, j, k, c=0, t;
	scanf("%s",&ch);
	while ( ch[0] != '*'){
		ans = 0;flag=1;
		vector<int>yes, no;
		FOR(i,0,strlen(ch)) if(ch[i]=='Y') yes.push_back(i+1);
							else		   no.push_back(i+1);
		if( yes.size()){
			ans = (ULL)yes[0];
			FOR(i,1,yes.size()){
				ans = (ans * (ULL)yes[i]) / __gcd((int)ans,yes[i]);
			}
			FOR(i,0,no.size()){
				if( ans % no[i] == 0){			
					flag=false;
					break;
					}
			}			
		}
		else flag=false;
		
		if(flag) PLng(ans);
		else	 PInt(-1);
		
		scanf("%s",&ch);
	}
	
	return 0;
}