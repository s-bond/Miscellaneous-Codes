#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int flag;
void functions (int a, int b)
{   
    char v[4];char w[4]="WIN";char l[4]="LOW";char h[5]="HIGH";
	int x=(b+a)/2;
	cout<<x;
	cout<<endl;
	cin>>v;
	if(!strcmp(v,w))
	{
		flag=1;
		return;
    }
	else if(!strcmp(v,l))
	{  
		functions(x+1,b);
	}
	else if(!strcmp(v,h))
	{   
		functions(a,x);
	}
}
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	functions(a,b);
    system("PAUSE");
    return 0;
}
