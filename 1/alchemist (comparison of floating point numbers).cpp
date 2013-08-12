#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int compare_float(float f1, float f2)
{
float precision = 0.00001;
if (((f1 - precision) < f2) && 
((f1 + precision) > f2))
{
return 1;
}
else
{
return 0;
}
}

int main()
{   double i,w;string e[10000];int sum=0;
    cin>>i>>w;
    while(i!=-1)
    {
    double z=(i/w),y=(1000.0/37.0);
    sum=compare_float(z,y);
    if(sum==1)
    cout<<"Y"<<endl;
    else
    cout<<"N"<<endl;
    cin>>i;cin>>w;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
