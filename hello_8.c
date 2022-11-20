/******************************************************************************
公元年分非4的倍數，為平年。
公元年分為4的倍數但非100的倍數，為閏年。
公元年分為100的倍數但非400的倍數，為平年。
公元年分為400的倍數為閏年。
*******************************************************************************/
#include <iostream>
using namespace std;
 
int main()
{
  int year;
   printf(" Input year \n");  
   scanf("%d",&year);
   if ( year % 4 ==0)
   {
        if(year % 100 == 0 && year%400 !=0 )
    {
            printf(" %d is a NOT leap year \n ",year);
    }   else{
            printf(" %d is a  leap year \n ",year);
    }
   }else
   {
      printf(" %d is a NOT leap year \n ",year); 
   }      
   cout<<"Hello World!";
    return 0;
}  
