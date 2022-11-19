#include <stdio.h>

int main()
{
    printf("Character:%c %C \n", 'a',65);
    printf("Decimal: %d %1d\n", 1977, 65000L);
    printf("Preceding with blanks: %10d \n",1977);
    printf("Preceding with zeros: %010d \n",1977);
    printf("Some differenct radices: %d %x %o %#x %#o \n", 100,100,100,100,100);
    
    return 0;
}
