#include <iostream>
using namespace std;
 
int main()
{
  int i;
   printf(" Input an integer number \n");  
   scanf("%d",&i);
    switch(i){
        case 1:
        printf(" This is Monday \n");
        case 2:
        printf(" This is Tuesday \n");
        break;    
        case 3:
        printf(" This is Wednsday \n");
        case 4:
        printf(" This is Thursday \n");
        break;            
        case 5:
        printf(" This is Friday \n");
        case 6:
        printf(" This is Saturday \n");
        break;            
        default:
        printf(" This is Sunday \n");
        break;
    }
    cout<<"Hello World";
    return 0;
}  
