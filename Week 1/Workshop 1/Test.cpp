#include <math.h>
#include <stdio.h>

#include <chrono>
#include <iostream>
#include <string>

int main(void) {
  long long int binary = 0;
  long long int decimal = 0;
  int power = 0;
  int digit;

  while (1) {
    scanf("%d", &digit);

    if (digit != 1 && digit != 0) {
      printf("Invalid digit! Only input 0 or 1! ");
      continue;
    }

    binary += digit * pow(10, power);
    decimal += digit * pow(2, power);
    power++;
    if (power == 16) {
      break;
    }
  }
  printf("Binary number is: %lld \n", binary);
  printf("Decimal number is: %lld", decimal);
}