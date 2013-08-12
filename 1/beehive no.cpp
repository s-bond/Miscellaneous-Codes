#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{   long long a,b=0,n=1,i=0;scanf("%lld",&a);
    //char c[1000];
    while(a!=-1)
    {
     if((12*a)-3>=0)//D for quadratic 3n(n+1)+1-x;
     {
     b=(3+sqrt((12*a)-3))/6;//root of the eq.
     n=((3*b)*(b-1))+(1-a);//checking whether it satisfiess
     if(n==0)
     printf("Y\n");
     else
     printf("N\n");  
     }
     else 
     printf("N\n");
     scanf("%lld",&a);                     
    }
    //for(int j=0;j<i;j++)
    //printf("%c\n",c[j]);
    return 0;
}
