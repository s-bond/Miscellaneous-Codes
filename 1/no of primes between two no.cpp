#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
void function (long int x,long int y)
{
	for(long int i=x;i<=y;i++)
	{	
	int flag=1;
   long int z=sqrt(i);
		for(long int j=2;j<=z;j++)
		{   if(i%j==0)
			{flag=0;break;}
		}	 
		if (flag==1)
		cout<<endl<<i;
	}
}
int main()
{   int n;
    cin>>n;
   long int a[n],b[n];
    
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
         cin>>b[i];
    
    }
    for(int i=0;i<n;i++)
    {
            function (a[i],b[i]);
            cout<<endl;      
    }
    system("PAUSE");
    return 0;
}
