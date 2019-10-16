// DIGITAL CLOCK
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
 char Hours[7] = {'0','1','2','3','4','5','6'};
 char HOURS[3] = {'0','1','2'};
 int change1 = 0, change2 = 0, change3 = 0;
 for ( int i = 0, I = 0, II = 0; i < 10; i++ ){
  cout<<"Hours: "<<HOURS[change3]<<II<<"\t";
  cout<<"Minutes: "<<Hours[change2]<<I<<"\t";
  cout<<"Seconds: "<<Hours[change1]<<i;
  Sleep(1000);
  system("cls");
  if ( i == 9 ) {
   change1 +=1;
   i = 0;
   if ( change1 == 6 ){
    change1 = 0; 
    I++;
    if ( I == 9 ){
     I = 0;
     change2++;
     if ( change2 == 6 ) {
      change2 = 0;
      II++;
      if ( II == 9 ){
       change3++;
       II = 0;
       if ( change3 == 2 ){
        change3 = 0;
        break;
       }
      }
     }
    }
   }
  }
 }
}
