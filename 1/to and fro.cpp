#include <cstdlib>
#include <iostream>
using namespace std;
/*void function (char a[],char b[][],int row,int column)
{   
	for(int i=0;i<row;i++)
	{
	int k=(i+1)*column;
	int z=k;
		if(i%2==0)
		{
			for(int j=0;j<column;j++)
			{
				b[i][j]=a[z-column];
				z++;
			}
		}
		
		if(i%2!=0)
		{
			for(int j=0;j<column;j++)
			{
				b[i][j]=a[z-1];
				z--;
			}
		}
	}
	for(int i=0;i<column;i++)
		for(int j=0;j<row;j++)
			cout<<b[j][i];
	
}
*/
int main()
{   
	int column;
	cin>>column;
    while(column!=0)
 {  
	char a[200];
	cin>>a;
	int x=0;
	while(a[x]!='\0')
	x++;
	int row=x/column;
	char b[row][column];
	
	for(int i=0;i<row;i++)
	{
	int k=(i+1)*column;
	int z=k;
		if(i%2==0)
		{
			for(int j=0;j<column;j++)
			{
				b[i][j]=a[z-column];
				z++;
			}
		}
		
		if(i%2!=0)
		{
			for(int j=0;j<column;j++)
			{
				b[i][j]=a[z-1];
				z--;
			}
		}
	}
	for(int i=0;i<column;i++)
		for(int j=0;j<row;j++)
			cout<<b[j][i];
	cout<<endl;
	cin>>column;
 }	    
    system("PAUSE");
    return 0;
}
