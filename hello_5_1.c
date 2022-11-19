#include <stdio.h>
using namespace std;
int main(void)
{
int a=9,b=6;
printf("first number:%d \n");
scanf("%d",&a);
printf("second number:%d \n");
scanf("%d",&b);
if(a>b){
printf("a>b");
}else if (a<b){
printf("a<b");
}else{
printf("a=b");
}
return 0;
}
