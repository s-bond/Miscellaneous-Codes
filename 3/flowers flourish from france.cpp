#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>
using namespace std;
int main () {
         int i,j,l;
         char c[5000],t,s;
         bool flag;
         while ( cin.getline ( c,5000) ){
                             if ( c[0] == '*' ) break;
                             flag = true;
                             s='.';
         l = strlen (c);
              for ( i = 0; i < l;i ++ )
                                      if ( c[i] != ' ' ) {j = i;break;}
              t = tolower(c[j]);
              for (j ; j< l; j ++ ){
                         if ( c[j] == ' ' && c[j+1] != ' ' && j + 1 < l){
                                   s = tolower ( c[j+1] );
                                   }
                         else if ( s != t && s != '.') {flag = false;break;}
                         }
              if ( flag ) printf ("Y\n");
              else        printf ("N\n");                                 
                             }        
         }
