#include <iostream>
using namespace std;
int main () {
         
         int v[100],smap[100] = {0};
         int n,b,x;
         bool flag = true;
         scanf ( "%d%d",&n,&b);
         while ( n != 0 && b != 0){
                   
                   for ( int i=0;i < b;i ++ ){
                             scanf ( "%d",&v[i]);
                             }
                   
                   
                   for ( int i = 0;i < b;i ++ ){
                             for ( int j = i;j < b;j ++ ){
                                          x = v[j] - v[i] ;
                                          if ( x<0 ) x*= (-1);
                                          smap [ x ] = 1; 
                                       
                                       }
                             }
                   
                   for ( int i=0;i <= n;i ++ ){
                             if ( smap[i] == 0)
                                {flag = false;
                                break;}
                             }
                   
                   if ( flag ) printf("Y\n");
                   else        printf("N\n");
                   scanf ( "%d%d",&n,&b);
                   flag =true;
                   for ( int i=0;i<100;i++ ) smap[i]=0;
                   }
        return 0;
         }
