#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{     
     long int a[10],b[10],x[10];
     for(int i=0;i<10;i++)
   {
	  cin>>a[i];
	  cin>>b[i];
	  x[i]=(a[i]-b[i])/2;
   }
   for(int i=0;i<10;i++)
   {
	 cout<<endl<<x[i]+b[i];
	 cout<<endl<<x[i];
   }

    system("PAUSE");
    return 0;
}
