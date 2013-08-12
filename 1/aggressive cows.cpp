#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
void swap (int *a,int *b)
{
 int *temp;
 *temp=*a;
 *a=*b;
 *b=*temp;    
 cout<<endl<<"swaped";
}

int main()
{   int t,n,c;
    scanf("%d",&t);
    while(t-->0)
    {
     scanf("%d%d",&n,&c);
     int b[n];
     for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<n;i++)
       for(int j=0;j<n-i;j++)
          if(b[j]>b[j+1])
              swap(b[j],b[j+1]);
     n=b[c-1]-b[0];
     printf("%d\n",n);        
    }
  return 0;
}
