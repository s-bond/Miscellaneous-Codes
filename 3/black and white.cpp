#include <iostream>
#include <string.h>
using namespace std;
int main () {
         char source[501],dest[501];
         int length,count;
         cin >> source >> dest ;
         while ( source [0] != '*' ){
                        count = length = 0;
                        for ( int i=0; i < strlen(source) ; i ++ ){
                                  
                                  if ( source[i] != dest[i] )
                                     length ++; 
                                  
                                  if ( source[i] == dest[i] && length != 0 ){
                                                 count ++;
                                                 length = 0;
                                                 }
                                  }
                        if ( length != 0 ) count ++;                          
                        cout << count << endl;
                        cin >> source >> dest;
                        }
                        return 0;
         }
