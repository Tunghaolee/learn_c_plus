#include <iostream>  
using namespace std; 
int main(void)
{
    int x, y ;
    
    printf("Please enter an integer\n");
    scanf("%d",&x);
    printf("Please enter an integer\n");
    scanf("%d",&y);
    if (x>y){
        printf("x>y\n");
    }
    else if(x<y){
    printf("x<y \n");
    }
    else{
        
    printf("x=y\n");
        
    }
    cout<<"Hello World!";
    return 0;
}
