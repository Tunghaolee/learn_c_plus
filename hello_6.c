#include <iostream>
using namespace std;
 
int main()
{
    float r, area, circum;
    printf("please input a radius: \n");
    scanf("%f", &r);
    printf("The radius is %f \n", r);
    if (r >= 0.0){
        circum=2*3.14159*r;
        printf("The circumference of the radius is %f \n", circum);
        area =3.14159*r*r*2.0;
        printf("The area of the radius is %f \n", area);
    }else {
        printf("A radius should be greater than 0! \n");
    }
    cout<<"Finished!";
    return 0; 
}
