#include <iostream>
using namespace std;
int main () {
         int loop, time, m, s, one_goal=0, two_goal=0, one_time=0, two_time=0, total_one=0, total_two=0, team;
         char c;
		 bool one=true,two=true;
         cin >> loop;
         cin >> team >> m >> c >> s;
         time = m*60 + s;
         if ( team == 1 ) {
            one_goal ++;
            one_time = time;
            if (!time)one=false;
			}
         else {
            two_goal ++;
            two_time = time;
			if(!time)two=false;
              }
         
         loop --;
         
         while ( loop -- ) {
        
            cin >> team >> m >> c >> s;
            time =  m*60 + s;
            
            if ( team == 1 ) {
			if ( (one_goal == 0 || one_time==0) && one ) one_time=time;	
			if (!one) one=true;
			if (!two) two=true;
              one_goal ++;
              if ( one_goal > two_goal ){			       
                   total_one += (time-one_time);				 
				   two_time = 0;
				   one_time = time;
				 }
			  else if ( one_goal < two_goal ){
				   total_two += ( time-two_time );
			       one_time =0;
				   two_time = time;
				 }
			  else if ( one_goal == two_goal ){
			       total_two += ( time-two_time );
				   one_time=0;
				   two_time=0;				 
				 }
           }
		    else if ( team == 2 ) {
			if (( two_goal ==0 || two_time==0) && two) two_time=time;
			if (!one) one=true;
			if (!two) two=true;
		         two_goal ++;
				 if ( two_goal > one_goal ){
				   total_two += ( time - two_time );
				   one_time = 0;
				   two_time = time;
				   }
				 else if ( two_goal < one_goal ) { 
				   total_one += ( time-one_time );
				   one_time = time;
				   two_time = 0;
				   }
				 else if ( one_goal == two_goal ) {
				   total_one += ( time-one_time );
				   one_time=0;
				   two_time=0;
				   
				   }
				 }
		   }
		if ( one_goal > two_goal ) total_one+=(2880-one_time);
		else if ( two_goal > one_goal ) total_two+=(2880-two_time);
		   
		   printf("%0.2d:%0.2d\n",total_one/60,total_one%60);
		   printf("%0.2d:%0.2d\n",total_two/60,total_two%60);
		   
		   system("pause");
         return 0;
         }
