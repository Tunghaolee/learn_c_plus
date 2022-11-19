#include <stdio.h>

int main()
{
    printf("Character:%c %C \n", 'a',65);
    printf("Decimal: %d %ld\n", 1977, 650000L);
    printf("Preceding with blanks: %10d \n",1977);
    printf("Preceding with zeros: %010d \n",1977);
    printf("Some differenct radices: %d %x %o %#x %#o \n", 100,100,100,100,100);
    printf("Width trick: %*d\n",5,10);
    printf("%s\n", "A string ");
    return 0;
}
