#include "Maths.h"

int main(void)
{

    Maths tool;

    printf("Factorial of 10 is: %d \n", tool.Factorial(10));
    printf("Sum of numbers up to 10 is: %d \n", tool.SumN(10));
    tool.printForwards(10);
    printf("\n");
    tool.printBackwards(10);
    printf("\n");
    printf("%d \n", tool.power(2, 5));
    printf("123456 has %d digits \n", tool.countDigits(123456));
}