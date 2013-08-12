//simple formulae cpoied from net
// g = gcd
// (a/g) * (b/g)
#include <iostream>
#include <cstdlib>
using namespace std;

long long int gcd (long long int a, long long int b){
    if ( b==0) return a;
    else
    return gcd ( b , a%b );
                      }
int main ()
{
    long long  int b,a,g;
    cin>>a>>b;
              while ( a!= 0){
                    g=gcd (a,b);
                    cout<<(b*a)/(g*g)<<endl;
                    cin >> a >> b;
                      }
    return 0;

}
