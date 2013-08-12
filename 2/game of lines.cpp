#include <iostream>
#define Max 1000
using namespace std;
int x[Max], y[Max];
int p[2000][2000], ne[2000][2000];
int gcd ( int a, int b ){
	if ( b == 0 ) return a;
	else{
	return gcd( b,a%b);
	}
	}
	
int main (){
	int t, n, dx, dy, i, j, Gcd, count,x1,x2,x3=1;
	scanf("%d",&n);
	while ( n ){
		count = 0;x1=x2=0;
		for ( i=0;i<n;i++ ){
		scanf("%d%d",&x[i],&y[i]);
			}
		for ( i=0;i<n;i++ ){
			for ( j=i+1;j<n;j++ ){
					dx = x[j] - x[i];
					dy = y[j] - y[i];
					if ( dx*dy > 0 ) {
                         if(dx<0){
							dx=(-1)*dx;
							dy=(-1)*dy;}
							Gcd = gcd(dx,dy);
							
							dx = dx/Gcd;
							dy = dy/Gcd;
							if ( p[dx-1][dy-1]!=x3 ){
							count ++;
							p[dx-1][dy-1] = x3;
							}
						}
					else if (dx*dy < 0 ){
						if(dx<0)
						{
						dx=(-1)*dx;
						Gcd=gcd(dx,dy);
						dx=(dx)/Gcd;
						dy/=Gcd;
						}
						else if(dy<0)
						{
						dy=(-1)*dy;
						Gcd=gcd((dx),(dy));
						dy=((dy))/Gcd;
						dx=dx/Gcd;
						}
						if(ne[(dx)-1][(dy)-1]!=x3)
						{
						count++;
						ne[(dx)-1][(dy)-1]=x3;
						}
						}
					else if(dx==0 && dy!=0)
					{
					if(x1==0)
					{
					x1=1;
					count++;
					}
					}
					else if(dy==0 && dx!=0)
					{
					if(x2==0)
					{
					x2=1;
					count++;
					}
					}
				}
			}
			printf("%d\n",count);
			scanf("%d",&n);
			x3++;
            }
			return 0;
	}


