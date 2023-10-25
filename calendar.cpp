#include<iostream>
using namespace std;
class calendar
{  
   public:
   int day = 24;
   int month = 8;
   int year = 2023;
   int d1;
   int m1;
   int y1;

   //calendar()
  // {
   //cout<<"Enter day: "<<endl;
   //cin>>day;
   //cout<<"Enter month: "<<endl;
   //cin>>month;
   //cout<<"Enter year: "<<endl;
   //cin>>year;
   //cout<<"The date is: "<<day<<'\t'<<month<<'\t'<<year;
  // }
   void printer(){
           cout<<"The date is: "<<day<<"/"<<month<<"/"<<year<<endl;
   }
   void check(){
       if(year%4==0 & year%400==0)
       {
           cout<<"Year is leap!"<<endl;
       }
       else{
           cout<<"Year is not leap!"<<endl;
       }
   }
   void dob(){
   cout<<"Enter day: "<<endl;
   cin>>d1;
   cout<<"Enter month: "<<endl;
   cin>>m1;
   cout<<"Enter year: "<<endl;
   cin>>y1;
   }
   void age(){
       if((m1>month & d1>day)
   	   cout<<"Age is: "<<d1-day<<"days"<<m1-month<<"months"<<year-y1<<"years"<<"old"<<endl;
	    }
};
main()
{
    calendar c1;
    c1.printer();
    c1.check();
    c1.dob();
    c1.age();
}


