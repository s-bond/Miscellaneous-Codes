#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n,a,b,x;
    vector <int> v;
    cin>>n >>a >>b;
    a*=b;
    for ( int i=0;i < n ; i++ ){
        cin>>x;
        v.push_back (x);
        }
    
    sort (v.begin(),v.end());
    x=0;
    for( int i=n-1; i>= 0; i--)
    
    {x=x+v[i];
    if( x >= a ){cout<< n-i; break;}}
    
    return 0;
    
}
