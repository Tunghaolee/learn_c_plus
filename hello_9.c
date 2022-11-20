/******************************************************************************
輸入年、月輸出當月日數
*******************************************************************************/
#include <iostream>
using namespace std;
 
int main()
{
  int month, year,bool_val, bool_val1;
   printf(" 請輸入年 \n");  
   scanf("%d",&year);
   printf(" 請輸入月 \n");
   scanf("%d",&month);
   if ( year % 4 ==0)
   {
        if(year % 100 == 0 && year%400 !=0 )
        {
            printf(" %d is a NOT leap year \n ",year);
            bool_val = false;
            
        }else{
            printf(" %d is a  leap year \n ",year);
            bool_val =true;
        }
   }else{
      printf(" %d is a NOT leap year \n ",year); 
            bool_val =0;
   }
   bool_val1 = (month ==1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12);
   printf("%d",bool_val1);
   if (month ==2){
       if (bool_val){
       printf(" 29 days\n");
       }else{
       printf(" 28 days\n");
       }
   }
   if(month !=2 && bool_val1){
       if (bool_val1){
       printf(" 31 days \n");
   }else{
       printf(" 30 days\n");
   }
   }
   return 0;
}  
