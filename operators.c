#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 5;

    printf("\na = %d \nb = %d \n", a, b);

    //Arithmetic Operators
    printf("\na + b = %d \n", a+b);
    printf("a - b = %d \n", a-b);
    printf("a * b = %d \n", a*b);
    printf("a / b = %d \n", a/b);

    //Relational Operator
    printf("\nIs a equal to b? : %d \n",a==b);
    printf("Is a not equal to b?: %d \n", a!=b);
    printf("Is a less than b?: %d \n", a<b);
    printf("Is a greater than b?: %d \n", a>b);

    //Logical Operators
    printf("\na && b: %d \n",a&&b); //&& -> logical AND 
    //other logical operators : || -> OR , ! -> NOT

    //Bitwise Operators
    printf("\na & b: %d", a & b); //Bitwise AND
    printf("\na | b: %d", a | b); //Bitwise OR
    printf("\na ^ b: %d \n", a ^ b); //Bitwise XOR
    // Other Bitwise operators : ~ -> One's complement operator, << -> Binary left shift , >> -> binary right shift

    // Assigment operators
    int c = 10;
    c += 1;
    printf("\nc = %d\n",c);

    //Miscellaneous Operators: sizeof(), &, *, ?:
    
    return 0;
}
