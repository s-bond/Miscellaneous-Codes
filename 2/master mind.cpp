#include <iostream>
using namespace std;
int main () {
    int a[4],b[4],t=10,count=0;
    for (int i=0;i<4;i++ ) 
        a[i]=1;
        
        while ( t-- ){
              for ( int i=0; i<4; i++ )
                  cout << a[i] << " ";
                  cout << endl;
              for ( int i=0; i<4; i++ )
                  cin >> b[i];
              for ( int i=0; i<4; i++ ){
                  if ( b[i] == 1)
                       count ++;
                  else if ( b[i] == -1)
                       a[i] ++;
                  }
              if ( count == 4 )
                   break;
              }
    return 0;
    }
