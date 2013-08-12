#include <iostream>
#include <fstream>
using namespace std;
int main () {
         ofstream sfout;
         sfout.open("assist.txt");         
         bool num[100001];
         int i,j,count,max=100000;
         for ( i = 0;i<=100000;i++) num [i] = true;
         for ( i=2;i<=max;i++){
           if ( num[i] ){
            sfout << i <<", ";
            count = 0;
            j = i+1 ;
            while ( j <= max ) {
             if ( num[j] ){           
              count ++;
              if ( count == i ) {num[j] = false;count=0;}
              }
              j++;
            }
           }

          }
         return 0;
         }
