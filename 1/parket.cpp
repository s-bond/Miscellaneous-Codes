#include <math.h>
#include <stdio.h>
using namespace std;
main()
{   long long p,b;//first draw dig. and then see perimeter
    long long x=0,y=0;
    scanf("%lld%lld",&p,&b);
    b=b+p;
    p=p+4;//perimeter is actually 4+no of red. because of edges
    x=((p/2)+(sqrt(((p*p)/4)-(4*b))))/2;
    y=b/x;
   
    if(2*(x+y)!=p)//2*(length + breadth)=perimeter
     {
     x=(p-(sqrt((p*p)-(4*b))))/2;y=b/x;
     }
     x>y?printf("%lld ",x):printf("%lld ",y);
     x>y?printf("%lld ",y):printf("%lld ",x);

}
