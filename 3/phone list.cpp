#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int n,t,i,j,s;
bool flag=false;
char c[12];
vector<string> v;
scanf ( "%d",&t );
while( t -- )
{
        scanf ( "%d",&n );
        for(i=0;i<n;i++)
        {
                        cin >> c;
                        v.push_back(c);
        }
        sort(v.begin(),v.end());
        
		for(i=0;i<n-1;i++)
        {
                        s=0;flag=false;
                        if(v[i][0]==v[i+1][0])
                        {
                                              s++;j=1;
                                              while(v[i][j]==v[i+1][j])
                                                   {s++;j++;}
												   
                                              if(v[i][s]=='\0'|| v[i+1][s]=='\0')
                                              {
                                                                 flag = true;
                                                                 break;
                                              }
                        }
                        if(flag)
                        break;
        }
        if(flag)
        printf("NO\n");
        else
        printf("YES\n");
v.clear ();
		}
}

