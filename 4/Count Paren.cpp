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
string S;					  // input string
vector <char> op;	          // operator 
int T[100][100], F[100][100]; // T: true F: false
int i, j, k, c, len;
void init() {
	// initialising true and false
		
		for ( i=0;i<op.size();i++ ){
			switch( op[i] ){
				case '&':
				T[i][i+1] = T[i][i] * T[i+1][i+1];
				F[i][i+1] = F[i][i]*F[i+1][i+1] + F[i][i]*T[i+1][i+1] + T[i][i]*F[i+1][i+1];
				break;
				
				case '|':
                F[i][i+1] = F[i][i]*F[i+1][i+1];
				T[i][i+1] = (T[i][i]+F[i][i])*(T[i+1][i+1]+F[i+1][i+1]) - (F[i][i]*F[i+1][i+1]);				
				break;
				
				case '^':
				T[i][i+1] = T[i][i]*F[i+1][i+1] + F[i][i]* T[i+1][i+1];
				F[i][i+1] = T[i][i]*T[i+1][i+1] + F[i][i]*F[i+1][i+1];
				break;
			}
		}
}

void perform () {
	for( j=1;j<op.size();j++ ){
			for ( i=0;i<op.size()-j;i++ ){
				for ( k=i;k<i+j+1;k++ ){
					
					switch(op[k]){
						case '&':
						T[i][i+j+1] += T[i][k] * T[k+1][i+j+1];
						F[i][i+j+1] += (T[i][k]+F[i][k])*(T[k+1][i+j+1]+F[k+1][i+j+1]) - T[i][k]*T[k+1][i+j+1];
						break;
						
						case '|':                        
						T[i][i+j+1] += (T[i][k]+F[i][k])*(T[k+1][i+j+1]+F[k+1][i+j+1]) - F[i][k] * F[k+1][i+j+1];						
						F[i][i+j+1] += F[i][k]*F[k+1][i+j+1];
                        break;
						
						case '^':
						T[i][i+j+1] += T[i][k]*F[k+1][i+j+1] + F[i][k] * T[k+1][i+j+1];
						F[i][i+j+1] += T[i][k]*T[k+1][i+j+1] + F[i][k]*F[k+1][i+j+1];
						break;
					}
				}
			}
		}	
}
int main () {
	int t;
	t = GI;
    getchar();				  // number of test runs
	while ( t-- ){
		c = 0;		
		getline( cin, S );		
	    len = S.length();
		
		for( i=0; i<len; ){
			if( S.at(i) == 'T' )    {T[c][c] = 1;i++;c++;}
			else if( S.at(i)== 'F') {F[c][c] = 1;i++;c++;}
			else if( S.at(i)=='a') {op.push_back('&');i+=3;}// and
			else if( S.at(i)=='o') {op.push_back('|');i+=2;}// or
			else if( S.at(i)=='x') {op.push_back('^');i+=3;}// xor
			else i++;
		}
		//////////
		init();
		//////////
		perform();
		//////////		
		PInt(T[0][c-1]);
		op.clear();
		memset(T,0,sizeof(T));
		memset(F,0,sizeof(F));
	}	
	return 0;
}
