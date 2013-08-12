#include <iostream>
using namespace std;
int main () {
         int t,n,p,s,a[10000][10],x,y,z,c=1,r;
         cin >> t;
         while ( c <= t ){
                 x=y=z=1;
                 cin >> n >> p;
                 
                 for ( int i=0;i<n;i++ )
                     for ( int j=0;j<p;j++ )
                           cin >> a[i][j];  
                 
                   // for 1 property
                   
                   for ( int j=0;j<p;j++ ){
                       s=0;
                       for ( int i=0;i<n;i++ ){
                                 s = s + a[i][j];
                                 
                                 if ( a[i][j] == 1  )
                                    break;
                                 }
                                 if ( s == 0 ) x = 0;
                                 break;
                                 }
                   
                   // for 2 and 3 property
                   for ( int i=0;i<n;i++ ){
                             s=0;
                             for ( int j=0;j<p;j++ ){
                                       s = s + a[i][j];
                                       }
                             if ( s == 0 ){
                                       y = 0;
                                       }
                             else if ( s == p ) 
                                       z = 0;
                             
                             }
                             
                   if ( x==0 && y==0 && z == 0) r = 0;
                   else if ( x==0 && y==0 && z == 1) r = 1;
                   else if ( x==0 && y==1 && z == 0) r = 2;
                   else if ( x==0 && y==1 && z == 1) r = 3;
                   else if ( x==1 && y==0 && z == 0) r = 4;
                   else if ( x==1 && y==0 && z == 1) r = 5;
                   else if ( x==1 && y==1 && z == 0) r = 6;
                   else if ( x==1 && y==1 && z == 1) r = 7;
                   
                   cout <<"Case "<<c<< ": "<<r <<endl;
                   c++;
                   
                   }
         
         return 0;
         }
