#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int nx , ny,i;
double x [1000] , y [1000] , w;
bool flag;
scanf("%d%d",&nx,&ny);
while( nx != 0)
{
                  cin>>w;
		flag = true;
        for(i=0;i<nx;i++)
                  scanf ( "%lf",&x[i] ) ;
        
        for(i=0;i<ny;i++)
                  scanf ( "%lf",&y[i] );
       		  
        sort(y , y + ny );
        sort(x , x + nx );
        
        for(i=0;i<nx;i++)
        {
                        if(i==0)
                        {
                                if(x[0] - w/2 > 0)
                                {
                                              flag = false;
                                              break;
                                }
                        }
                        else if(i == nx-1)
                        {
                             if(x[ i ] + w/2 < 75)
                             {
                                              flag = false;
                                              break;
                             }
                        }
                        else
                        {
                            if(x[i] + w < x[i+1])
                            {
                                              flag = false;
                                              break;
                            }
                        }
        }
        
        if ( flag )
        for(i=0;i<ny;i++)
        {
                        if(i==0)
                        {
                                if(y[0] - w/2 > 0)
                                {
                                              flag = false;
                                              break;
                                }
                        }
                        else if(i == ny - 1)
                        {
                             if(y[ i ] + w/2 < 100)
                             {
                                              flag = false;
                                              break;
                             }
                        }
                        else
                        {
                            if(y[i] + w < y [i+1])
                            {
                                              flag = false;
                                              break;
                            }
                        }
        }
        
        if(flag)
        printf("YES\n");
        
        else
        printf("NO\n");
        
        scanf("%d%d",&nx,&ny);
                                       }
return 0;
}        

