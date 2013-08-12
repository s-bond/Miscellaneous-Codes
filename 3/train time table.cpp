#include <iostream>
using namespace std;
class train {
            public:
            int a_h,a_m;
            int d_h,d_m;
            int o;
            };
            
int main () {
         
         int test,tt,na,nb,k=1,ca,cb,h,m;
         train a[101],b[101],temp;
         char c;
         bool flag = true;
         scanf ("%d",&test);
         while ( k <= test ){
                   
                   ca = cb = 0;
                   
                   scanf ( "%d%d%d",&tt,&na,&nb );
                   
                   for ( int j=1;j<=na;j++ ){
                             
                             scanf ("%d",&a[j].d_h); 
                             scanf ("%c",&c);
                             scanf ("%d",&a[j].d_m); 
                             scanf ("%d",&a[j].a_h); 
                             scanf ("%c",&c); 
                             scanf ("%d",&a[j].a_m);           
                             a[j].o = 0;
                             }
                   for ( int j=1;j<=nb;j++ ){
                             
                             scanf ("%d",&b[j].d_h); 
                             scanf ("%c",&c);
                             scanf ("%d",&b[j].d_m); 
                             scanf ("%d",&b[j].a_h); 
                             scanf ("%c",&c); 
                             scanf ("%d",&b[j].a_m);
                           b[j].o = 0;
                             }
                   
                   if ( na == 0 ) cb = nb;
                   if ( nb == 0 ) ca = na;
                   
                   if ( na!=0 && nb!=0 ){
                   
                   //sort acc to departure time
                   	for (int i = 1;i <= na;i ++){
	                  	for(int j = 1;j <= na; j ++ ){
                    if ( j + 1 <= na){
			if ( (a[j].d_h > a[j+1].d_h ) || (a[j].d_h == a[j+1].d_h && a[j].d_m > a[j+1].d_m ) ){
				temp	=	a[j+1];
				a[j+1]	=	a[j];
				a[j]	=	temp;
			}}
		}
	         }
                           for (int i = 1;i <= nb;i ++){
	                  	for(int j = 1;j <= nb; j ++ ){
                    if ( j + 1 <= nb ){
			if ( (b[j].d_h > b[j+1].d_h) || ( b[j].d_h == b[j+1].d_h && b[j].d_m > b[j+1].d_m ) ){
				temp	=	b[j+1];
				b[j+1]	=	b[j];
				b[j]	=	temp;
			}}
		}
	         }
                      
                   for ( int i=1;i<=na;i++ ){
                             flag =  true;
                             for ( int j=1;j<=nb;j++ ){
                                       
                                       m = b[j].a_m + tt;
                                       h = b[j].a_h;
                                       if ( m >= 60 ){
                                                 m = m % 60;
                                                 h ++;
                                                 }
                                                 
                                       if ( (a[i].d_h > h || ( a[i].d_h == h && a[i].d_m >= m)) && b[j].o == 0 && h <= 23 )
                                       {flag = false;
                                       b[j].o=1;
                                       break;}
                                       
                                       }
                                       if ( flag )
                                    ca ++ ;      
                                      
                             }
                   
                   for ( int i=1;i<=nb;i++ ){
                             flag =  true;
                             for ( int j=1;j<=na;j++ ){
                                       
                                       m = a[j].a_m + tt;
                                       h = a[j].a_h;
                                       if ( m >= 60 ){
                                                 m = m % 60;
                                                 h ++;
                                                 }
                                                 
                                       if ( (b[i].d_h > h || ( b[i].d_h == h && b[i].d_m >= m)) && a[j].o == 0 && h <= 23)
                                       {flag = false;
                                       a[j].o = 1;
                                       break;}
                                       
                                       }
                                       if ( flag )
                                             cb ++ ;      
                             
                             }
                             }
                             
                   cout << "Case #"<<k<<": "<<ca << " "<<cb<<endl;
                   
                   k ++;                                                     

                   }
                   
         return 0;
         }
