#include<iostream>
#include<math.h>
int mylog2(unsigned long long x)
{

    int l = -1; // mylog2(0) will return -1

    while (x != 0llu)

    {

        x = x >> 1llu;

        ++l;

    }

    return l;

}
int main()
{
char c[5];
long long int n=0,k=0,sum=0;
scanf("%s",&c);
while( c[0] != '0' || c[1] != '0'  )
{
        n = ( ( ( c[0] - 48) * 10 ) + ( c[1] - 48 ) ) * ( pow ( 10, ( c[3] - 48 ) ) );
        k = mylog2(n);
        if(pow(2,k)==n)
        sum = 1;
        else{
            n -= pow(2,k);
            sum = 3 + ( n - 1) *2;
        }
        printf("%lld\n",sum);

		scanf("%s",&c);
		}
return 0;
}
        
        

