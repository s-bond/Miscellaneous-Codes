#include <cstdlib>
#include <iostream>
using namespace std;

void function (int x, int y)
{
	if(y!=x && y!= x-2)
	cout<<endl<<"No Number";
	else
	{
		if(y%2==0)
		{
			if(y==x)
			cout<<endl<<2*y;
			else
			cout<<endl<<2*y+2;
		
		}
		else
		{
			if(y==x)
			cout<<endl<<2*y-1;
			else
			cout<<endl<<2*y+1;
		}	
	}
}
int main()
{   
    int n;
	cin>>n;
	int x[n],y[n];
	for(int i=0;i<n;i++)
	cin>>x[i]>>y[i];
    for(int i=0;i<n;i++)
	function(x[i],y[i]);
	cout<<endl;
    system("PAUSE");
    return 0;
}
