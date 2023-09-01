#include <stdio.h>

int main()
{
    //Integer Data Type
    int age = 19; //4 bytes, used to store whole numbers (Range: -2,147,483,648 to 2,147,483,647)
    long population = 8000000; //8 bytes, used for large integer(Range: -9.2 billion to 9.2 billion)
    
    //Floating Point Data Type
    float temperature = 38.9; //4 bytes, used for single precision floating-point number
    double distance = 684.343355; //8 bytes, used for double precision floating-point number

    //Character Data Types
    char grade = 'C'; // 1 byte, used to store single character 
    unsigned char symbol = '$'; // 1 bytw, used for unsigned character;

    // Boolean Data Type
    _Bool isRaining = 1; // 1 byte, used to represent True(1), False(0)   


    //Displaying The Values
    printf("Age: %d\n, age");
    printf("Population: %ld\n", population);
    printf("Temperature: %f\n", temperature);
    printf("Distance: %lf\n", distance);
    printf("Grade: %c\n", grade);
    printf("Symbol: %c\n", symbol);
    printf("Rain: %d\n", isRaining);

    return 0; 
        
        
    return 0;
    
}