#include<iostream>
main(){int t,r,i=0,j=0,k,a[99][99],*x;std::cin>>t;for(;i<t;i++){scanf("%d",&r);for(;j<r;j++)for(k=0;k<=j;k++)scanf("%d",a[j]+k);for(--j;j>0;j--)for(k=0;(x=a[j]+k)&&k<j;k++)(*x>*(x+1))?(*(x-99)+=*x):(*(x-99)+=*(x+1));printf("%d\n"**a);}}
