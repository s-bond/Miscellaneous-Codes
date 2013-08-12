#include <cstdlib>
#include <iostream>
using namespace std;
int power (int x, int y)
{
	int power=1;
	for(int i=0;i<y;i++)
	power=power*x;
	return power;

}
int function (int x)
{
	int sum=0,y=0,k=1;
	do
	{   
		int i=power(5,k);
		y=x/i;
		sum=sum+y;
		k++;
	}while(y>=1);
return sum;
}


int main()
{   
    int x;
	cin>>x;
	cout<<endl;
	int a[x];
	for(int i=0;i<x;i++)
	{cin>>a[i];a[i]=function(a[i]);}
	for(int i=0;i<x;i++)
	cout<<endl<<a[i];
	cout<<endl;
    system("PAUSE");
    return 0;
}
