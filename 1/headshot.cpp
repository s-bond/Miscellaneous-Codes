#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{   
    char c[101];
	cin>>c;int i=0;float o=0.0,z=0.0;
	while(c[i]!='\0')
    {   if(c[i]=='1')
			o++;
		else
			z++;
    i++;
	}
	int nofzero=0; float s=0.0;
	float rotate;rotate=(o/i);
	for(int j=0;j<i;j++)
	{ 		if(c[j]=='0')
			{
			 if(j+1<i && c[j+1]=='0')
			  nofzero++;
			}
			if(c[j]=='0')
			{
			 if(j+1<i && c[j+1]=='1')
			  s++;
            if(j==i-1 && c[0]=='1')
            s++;
            if(j==i-1 && c[0]=='0')
            nofzero++;}		
	}
    //cout<<endl<<"s= "<<s<<" no os zeros= "<<nofzero;
	float shoot=s/(s+nofzero);//cout<<rotate<<endl<<shoot;
	if(shoot==rotate)cout<<"EQUAL";
	else if(shoot > rotate )cout<<"ROTATE";
	else cout<<"SHOOT"<<endl;
	//system("pause");
    return 0;
}
