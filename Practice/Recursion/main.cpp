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

    printf("Sum of 123456 is %d \n", tool.SumDigits(123456));
    printf("123456 reversed is: %d \n", tool.reverseNumber(12346));
    printf("1221 is a palindrome: %s \n", tool.checkPalindrome(1221) ? "True" : "False");
    printf("2X4 is : %d \n", tool.multiply(2, 4));
    printf("The 0th fib number is : %d \n", tool.fib(0));
    printf("The # of ways to climb 4 stairs is: %d \n", tool.climbStairs(4));
    printf("%d", tool.convertDecToBinary(6, 0));
}