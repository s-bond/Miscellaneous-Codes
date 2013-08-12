#include <iostream>
using namespace std;
int main () 
{
 int t;
 cin >> t;
 while ( t-- ) {
       unsigned long long int k,s,count = 0;
       cin >> k;
       if ( k == 1 ) cout <<"192"<<endl;
       else if ( k== 3 )cout << "692"<<endl;
       else{
       if ( k % 2 == 0){
            k= k/2;
            cout << 4+(5*(k-1)) << "42"<<endl;
            }
       else {
            k=(k/2)+1;
            cout << 1+ (5*(k-1)) << "92"<<endl;
            }
       }    }
   return 0; 
}
