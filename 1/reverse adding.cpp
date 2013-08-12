#include <cstdlib>
#include <iostream>
using namespace std;

int reverse (int a)
{ 
	int temp=0;
	while(a>=1)
	{
	temp=temp*10+a%10;
	a=a/10;
    }
	return temp;
}

int add (int x, int y)
{ 
  x+=y;
  x=reverse (x);
  return x;
}

int main()
{ 
  int n;
  cin>>n;
  int x[n],y[n];
  for(int i=0;i<n;i++)
  {	
	cin>>x[i];
	cin>>y[i];
  }
  for(int i=0;i<n;i++)
  {
	x[i]=reverse(x[i]);
	y[i]=reverse(y[i]);
	x[i]=add(x[i],y[i]);
  
  }
      for(int i=0;i<n;i++)
      cout<<endl<<x[i];
    
    system("PAUSE");
    return 0;
}
