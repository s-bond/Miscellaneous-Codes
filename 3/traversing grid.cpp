#include <iostream>
using namespace std;
int main () {
         unsigned long long int t,n,m;
         char c;
         scanf ( "%llu",&t );
         while ( t -- ){
                   scanf ( "%llu%llu",&n,&m );
                   if ( n == 1 ) c = 'R';
                   else if ( m == 1 ) c = 'D';
                   else if ( n == m && n%2==0 ) c = 'L';
                   else if ( n == m && n%2!=0 ) c = 'R';
                   else if ( n%2==0 && m%2!=0 && n<m ) c = 'L';
                   else if ( n%2==0 && m%2!=0 && n>m ) c = 'D';
                   else if ( n%2!=0 && m%2==0 && n>m ) c = 'U';
                   else if ( n%2!=0 && m%2==0 && n<m ) c = 'R';
                   else if ( n%2==0 && m%2==0 && n<m ) c = 'L';
                   else if ( n%2==0 && m%2==0 && n>m ) c = 'U';
                   else if ( n%2!=0 && m%2!=0 && n>m ) c = 'D';
                   else if ( n%2!=0 && m%2!=0 && n<m ) c = 'R';
                   printf("%c\n",c);
                   }
         }
