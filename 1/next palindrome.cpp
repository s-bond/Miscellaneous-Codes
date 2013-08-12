#include <cstdlib>
#include <iostream>
using namespace std;
int function(int a)
{ 	int temp=0;
	while(a>=1)
	{temp=(temp*10)+(a%10);
	a=a/10;
    }
    return temp;
}
int function1(int a)
{int q=0;
     while(q!=a)
     {a++;q=function((a));}
     return q;
}
int main()
{   int t;cin>>t;int a,z;
    while( t -- > 0)
    {cin>>a;z=function1(a);cout<<z<<endl;}
    system("PAUSE");
    return 0;
}

