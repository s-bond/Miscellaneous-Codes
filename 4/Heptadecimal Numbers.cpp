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
char first[100001], second[100001], ch;
int c;
bool flag;
char comp (char c1, char c2){
	int a = c1, b = c2;
	int d = a - b;
	if( d > 0 ){
		flag = true;
		return '>';		
	}
	else if ( d < 0 ){
		flag = true;
		return '<';
	}
	else{
		c++;
	    return ' ';
	}
	
}
int main () {
	int i, j, k, len1, len2;
    scanf ( "%s%s",&first,&second);
    while ( first[0] != '*'){
    	
    	vector<char>a,b;
    	len1 = strlen(first); 
    	len2 = strlen(second);
   	 	k    = 0;
		for(i=0;i<len1;i++)
	    	if( first[i] != '0')
	    		break;
		for(j=i;j<len1;j++)
			a.push_back(first[j]);
		
		for(i=0;i<len2;i++)
	    	if( second[i] != '0')
	    		break;
		for(j=i;j<len2;j++)
			b.push_back(second[j]);
			
		len1 = a.size();
		len2 = b.size();
		
		if ( len1 > len2 )
			printf(">\n");
		else if ( len1 < len2 )
			printf("<\n");
		else{
			FOR(i,0,len1){
				ch = comp (a[i], b[i]);
				if( flag ){									
				printf("%c\n",ch);break;
				}
			}
			if ( c == len1 )
				printf("=\n");
		}
    	
    	scanf ( "%s%s",&first,&second);
    	flag = c = 0;
    }	
	return 0;
}
