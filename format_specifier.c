#include <stdio.h>

int main()
{
    // format specifier % = defines and formates a type of data type to be displayed   
    // %c = character
    // %s = string (aaray of character)
    // %f = float   
    // %lf = double
    // %d = integer

    // %.1 = deciaml precision  

    //exmaple code                      
    float item1 = 23.445;
    float item2 = 45.34;
    float item3 = 36.5666;

    printf("ITEM 1 PRICE: %.3f\n", item1);
    printf("ITEM 2: %.2f\n", item2);
    printf("ITEM 3: %.4f\n", item3);
    

    return 0;
}