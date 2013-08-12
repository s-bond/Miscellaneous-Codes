#include <iostream>
#include <cstdlib>

using namespace std;
int main () {
    int c,r,c1,c2,w;
    cin>>c >>r;
    while ( c!=0 ) {
          
          if( r < c-1)
          cout<<"IMPOSSIBLE" << endl;
          else {
               int a[c][c];
               for(int i=0;i<c;i++)
               for(int j=0;j<c;j++)
               a[i][j]=0;
               int x=0;
               for ( int i=0; i<r ; i++) {
                   cin>> c1 >>c2 >> w;
                   if( a[c1][c2] == 0 && a[c2][c1]==0) a[c1][c2]=a[c2][c1]=w;
                   else if( a[c1][c2] > w && a[c2][c1] > w) a[c1][c2]=a[c2][c1]=w;
                   if( x < a[c1][c2] ) x=a[c1][c2];
                                         }
                   
                   cout<<x << endl;
               }
          
          cin>> c >> r;
                    }
          
          system("pause");
          return 0;
}
