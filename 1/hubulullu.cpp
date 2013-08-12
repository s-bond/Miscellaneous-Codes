#include <cstdlib>
#include <iostream>
using namespace std;
//triky one
//always the first player will win
//study the cases carefully  
//and conclude... :)
int main()
{    int t;
     cin>>t;
     while(t-->0)
     {
     long long int n;int i;
     cin>>n>>i;
     if(i==0)
     cout<<"Airborne wins."<<endl;
     else
     cout<<"Pagfloyd wins."<<endl;            
     }
    return 0;
}
