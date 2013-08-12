#include <cstdlib>
#include <iostream>
using namespace std;
int function (int a[], int sum, int n)
{	 int z[n],sum1=0,sum2=0;
	 for(int i=0;i<n;i++)
	 {      
			z[i]=a[i]-(sum/n);
			sum1=sum1+z[i];
			if(z[i]>0)
			sum2=sum2+z[i];
	 }
	 if(sum1!=0)
	 return (-1);
	 else if(sum1==0)
	 return sum2;
}
int main()
{	int k;
	int sum=0,sum3=-1;
	int e[10001];
	cin>>k;
	while(k!=-1)
   {sum3++;	
       int a[k];
		for(int j=0;j<k;j++)
		{
			cin>>a[j];
			sum=sum+a[j];
		}
		e[sum3]=function(a,sum,k);
		cout<<e[sum3]<<endl;
        sum=0;
        cin>>k;
	}
//	for(int j=0;j<=sum3;j++)
	//cout<<e[j]<<endl;
	system("pause");
    return 0;
}
