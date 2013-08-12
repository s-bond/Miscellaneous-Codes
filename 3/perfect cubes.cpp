#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
int main () {
         ofstream sfout;
         sfout.open("cube.txt");
         
         unsigned long long int a,b,c,d,i,j,k,num;
         for ( num =1;num<=101;num++){
         a = pow (num,3);
           for ( i=2;i<num;i++){
           b = pow ( i,3);
             for ( j=i+1;j<num;j++){
             c = pow(j,3);
               for ( k=j+1;k<num;k++){
               d = pow(k,3);
              if ( a == b+c+d){
               sfout <<"Cube = "<<num<<", Triple = ("<<i<<","<<j<<","<<k<<")"<<endl; 
               }  
              }
             }
            }                          
           }
         return 0;
         }
