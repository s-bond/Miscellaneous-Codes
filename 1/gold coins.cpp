#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
map <int , long long> smap;
unsigned int s=0;
unsigned long int m(unsigned long int x,unsigned long int y)
{  
    if(x>y)return x;else return y;
}

unsigned long int f(unsigned long int n)
{if (n == 0) return 0;
  long long r = smap[n];

  if (r == 0) 
  {  
    r = m( n , f(n/2)+f(n/3)+f(n/4) );

    smap[n] = r;
  }
  return r;
}

int main()
{   unsigned long int a,b;int c;
    while(scanf("%d",&a)!=EOF)
    {b=0;
     b=f(a);   
    cout<<b<<endl;       
    }
    system("PAUSE");
    return 0;
}
