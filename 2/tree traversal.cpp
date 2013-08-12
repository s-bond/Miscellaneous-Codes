#include <iostream>
using namespace std;

class node {
     public:
      int info;
      node *left;
      node *right;
      };
      
class tree {
      public:
      node *root,*temp;
      tree () { root = temp = NULL;}
      void insert ( int );
      void pre( node *);
      void post( node *);
      };
      
 void tree :: insert ( int x ) {
      node *t;
      t    =  new node;
      t    -> info     =   x;
      t    -> left     =   NULL;
      t    -> right    =   NULL;
           
           if ( root == NULL )
              root = t;
           
           else {
                temp    =    root;
                
                while ( temp != NULL) {
                      if ( x > temp -> info && temp -> right != NULL ){
                           temp     =  temp -> right;
                           }
                      else if ( x < temp -> info && temp -> left != NULL ){
                           temp     =  temp -> left;
                           }   
                      else
                      break;
                      }
                
                      if ( x < temp -> info)
                         temp -> left  =  t;
                      else
                         temp -> right =  t;
                }
      }
 
 void tree :: pre ( node *temp ){
      if ( temp != NULL){
           cout << temp -> info << " ";
           pre ( temp -> left);
           pre ( temp ->right); 
           }
      }
      
 void tree :: post ( node *temp ){
      if ( temp != NULL){
           post ( temp -> left);
           post ( temp ->right);
           cout << temp -> info << " "; 
           }
      }
      
      int main () {
          tree s;
          int n,x;
          string c;
          cin >> n;
          for ( int i=0; i<n; i++) { cin >> x; s.insert (x);}
          cin >> c;
          if ( c == "pre") s.pre(s.root);
          else if ( c== "post") s.post(s.root);
          return 0;
          }
