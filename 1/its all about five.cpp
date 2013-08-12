#include <iostream>
#include <string>
using namespace std;
int main ()
{
    char a[1005];
    cin>>a;
    while(a!=EOF)
    {
    int x;
    x=strlen(a);
    if(a[x-1]== '0' || a[x-1]== '5' )
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    cin>>a;
    }
    return 0;
}
