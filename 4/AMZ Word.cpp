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
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
inline int GI ( void )
{
int Ret = 0;
char Ch;
while ( isdigit ( Ch = getchar() ) ) Ret = Ret * 10 + ( Ch - '0' );
return Ret;
}
/////////////////
using namespace std;
int dp[100001][3];
int main () {
	int i, j, k, c=0, t;
	ofstream sfout;
	sfout.open("sid.txt");
	FOR(t,1,25){
//////////////////////////////////////////////////////////		
	dp[0][0] = dp[0][1] = dp[0][2] = 1;
	 FOR(i,1,t){
 		dp[i][0] = dp[i-1][0] + dp[i-1][1];
 		dp[i][1] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2];
 		dp[i][2] = dp[i-1][1] + dp[i-1][2];
 	}
 	sfout<<"\""<<dp[t-1][0] + dp[t-1][1] + dp[t-1][2]<<"\""<<",";
/////////////////////////////////////////////////////////// 	
	memset(dp,0,sizeof(dp));
	}
	return 0;
}