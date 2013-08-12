#include<iostream>
#include<vector>
using namespace std;

int main()
{
int n,k=0,total,sum=0,max=0,v,p=0;
vector <int > a;
scanf( "%d%d",&n,&total );

for(int i=0;i<n;i++){
scanf("%ld",&v);
a.push_back(v);
}
for(int i=0;i<n;i++)
{
    for(int j=k;j<n;j++){
	
		if(sum + a[j] < total ){
                                            
            sum += a[j];
            if(j == n-1){
            if ( sum > max )
                max = sum;
                p = n-1;
                break;
                }
                }
                
                else if( a[j] > total ){
				
                if ( sum > max )
                max = sum;
                p = j + 1;
				k=j+1;
                break;
                }
                else if( sum + a[j] > total )
                {
                if ( sum > max )
                max = sum;
                sum -= a[p];
                p ++;
                k = j;
                break;
                }
                else if( sum + a[j] == total || a[j] == total )
                {
                max = total;
                break;
                }
                }
                if(p == n || max == total)
                break;
}
printf("%d\n",max);
return 0;
}

