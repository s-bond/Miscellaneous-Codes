#include <cstdlib>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{   int n,s,a;

    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
    scanf("%d",&a);int sum=1;s=sqrt(a);
    if(a!=1)
    {for(int i=2;i<=s;i++)
     {
     if(a%i==0)
     {if(i!=(a/i))sum=sum+i+(a/i);else sum=sum+i;}
     }}
     else
     sum=0;
     
     printf("%d\n",sum);
   // e[j]=sum;
    }
      //for(int j=0;j<n;j++)
         //{printf("%d",e[j]);printf("\n");}
    system("pause");
    return 0;
}
