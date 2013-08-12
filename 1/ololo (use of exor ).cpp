#include <iostream>
using namespace std;
main()
{   int n;long long k;
    scanf("%d",&n);n--;
    scanf("%lld",&k);
    while(n-->0)
    {
    long long int a;
    scanf("%lld",&a);
    k=k^a;             //taking multiple exor's 
                       //each pair will find itself
                       //leaving the non pair element :)
    }           
    printf("%lld\n",k);
}
