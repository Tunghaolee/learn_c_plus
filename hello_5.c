#include <stdio.h>

int main()
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
    
    return 0;
}
