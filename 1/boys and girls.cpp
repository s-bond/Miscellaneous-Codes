#include <iostream>
#include <math.h>
using namespace std;
int main()
{   float g,b,p=0.0;
    
    int s=1;
    scanf("%f%f",&g,&b);
    while(g!=-1 && b!=-1)
    {
      if(g==b && g!=p )printf("%d\n",s);
      else if( g==p && b==p) printf("0\n");
      else
     {
      if(g>b)
      //{x=(g/(b+1));
      //y=ceil(x);
     cout<<ceil(g/(b+1))<<endl;
      
      else if(b>g)
       //x=(b/(g+1));
       //y=ceil(x);
       cout<<ceil(b/(g+1))<<endl;
     }
     scanf("%f%f",&g,&b);             
    }
    return 0;
}
