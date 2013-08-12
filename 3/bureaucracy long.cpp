#include <iostream>
using namespace std;

class node {
           public:
                    int info;   // law number
                    node *next; // next law
                    node *back; // previous law
                    node *link; // for cancel
           };

class law {
          public:
          node *start, *end, *t ,*temp,*temp1;
          law () { start = end = temp = temp1 =  NULL ; }
          void insert_law ( int );
          void cancel ( int , int );
          void perform ();
          void display ( int );
          };

void law :: insert_law ( int x ){
         
         t             =     new node;
         t -> info    =     x;
         t -> next    =     t -> link       = NULL;
         
         if ( start == NULL ){
                    start                   = t;
                    start      -> back      = NULL; 
                    }
         else {
                    temp = start;
                    while ( temp -> next != NULL )
                                 temp = temp -> next;
                    
                    temp       -> next      = t;
                    t          -> back      = temp;
                                                       
         }
         end            =      t;
         }
         
void law :: cancel ( int x , int y ){
         t             =     new node;
         t -> info     =     y;
         t -> next     =     NULL;
         
         temp          =     start;
         while ( temp -> next != NULL ) 
                               temp = temp -> next;
         
                     temp      -> next    = t;
                     t         -> back    = temp;
         
         temp          =      start;
         while ( temp -> info != x )
                               temp = temp -> next;
         
         t -> link     =      temp;
         end           =      t;
         }
         
void law :: perform () {
         
         t             =      end;
         
         while  ( t != NULL ){
                  
         temp          =      t;
         int i         =      0;
         
         while ( temp  -> link != NULL ){
                       
                       temp1   =  temp;
                       temp    =  temp -> link;
                       temp1 -> link = NULL;
                       
                       if ( i ++ % 2 == 0 )
                          temp -> info = 0;
                       }
                  
                  t = t -> back;
                  }
         }

void law :: display ( int x ) {
         
         int a [x],count = 0,i=1;
         t = start;
         while ( t != NULL ){
                   
                   if ( t -> info != 0 ){
                             a [count ++] = i;
                             }
                   t = t -> next;
                   i ++;
                   }
         
         cout << count << endl;
         for ( i=0;i<count;i++ )
             cout << a[i] <<" ";
             cout << endl;
         }
         
int main () {
         
         int t,n,i,x;
         char c[10];
         
         scanf ("%d",&t);
         while ( t -- ){
         
         law sid;
         
         i   =    1;
         scanf ("%d",&n);
         
         while ( i <= n ){
                   
                   cin >> c;
                   if ( c[0] == 'd' )
                   sid.insert_law( i );
                   else if ( c[0] == 'c' )
                   {
                   scanf ("%d",&x);
                   sid.cancel ( x , i );}
                   
                   i++;
                   }
          sid.perform();
          sid.display( n );                   
                   }
         
         system ("pause");
         return 0;
         }         

