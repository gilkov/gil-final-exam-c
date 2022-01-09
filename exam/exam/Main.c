#include <stdio.h>
#include <stdlib.h>
#include "Prime.h"

/**
* @file Main.c
* @brief main for the exam- run tests.
* @author Gil Kovshi
*/


/**
* @brief tests the function "GetNextPrime" in several cases.
* @author Gil Kovshi
*/

void TestPrime(void)
{
    printf("%s", "test case 1: first 10 prime numbers:\n");
    for (size_t i = 0; i < 10; i++)
    {
        prime_t current = GetNextPrime();
        if (current == 0)
        {
            printf("%s", "size error! your prime is too much big! finish tests...");
            return;
        }

        else
        {
            printf("%llu\n", current);
        }
    }
    printf("%s", "test case 2, your turn. enter a number, and the program returns you the (i+10)th prime number, where i is your input:\n");
    printf("%s", "waiting to your input...\n");

    prime_t input;
    scanf_s("%llu", &input, sizeof(input));
    for (prime_t i = 0; i < input-1; i++)
    {
        GetNextPrime();
    }
    prime_t ans = GetNextPrime();
    if (ans == 0)
    {
        printf("%s", "size error! your prime is too much big!");
    }
    else
    {
        printf("%s %llu \n", "the result is:", ans);
    }
}


/**
* @brief main function for the exam.
* @author Gil Kovshi
*/
int main(void)
{
    printf("%s", "Welcome to gil solution! Let's test my primes program!\n");
    TestPrime();
    return 0;
}