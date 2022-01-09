#include "Prime.h"
#include <stdbool.h>
/**
* @file Prime.c
* @brief The code of the Prime functions, includes util function.
* @author Gil Kovshi
*/


/**
* @brief checks if an odd number is a prime.
* @return true if the argument is prime, false else. returns true for 1 and for some even numbers.
* BE AWARE: because it is only util code, to save time, the function returns that 1 is prime- since you never check 1 
* from the called function. In addition, it works only to odd numbers.
* @author Gil Kovshi
*/
bool IsPrime(prime_t number)
{
    prime_t half = (number / 2)+1; // lazy- calculate the half only one time.
    // optimization: since we check only odd numbers, we dont need to check if it divide in even numbers!
    // since odd unmbers never divided by even numbers! so we can increace i by 2.
    for (prime_t i = 3; i < half; i+=2) 
    {
        if (number % i == 0) {
            return false; // since there are more dividor to the number than 1, it is not prime.
        }
    }

    return true; // if there are no divides to the number except from 1, it is prime! 
}

/**
* @brief calculates and returns the next prime. e.g. in the first run- returns 2, in the second-3.
* @return the I'th prime number, where I is the amount of calling to this funciton. 0 if any error was ocuored.
* @author Gil Kovshi
*/
prime_t GetNextPrime(void)
{
    static prime_t s_current = 2; // static variable for the current number that suspect as a prime.

    // beacuse 2 is the only even prime, he gets a private case, because we want to increase our counter in 2 each time.
    if (s_current == 2)
    {
        s_current = 3;
        return 2;
    }

    while (!IsPrime(s_current))
    {
        s_current = s_current+2; // increace by 2 beacuse no even in Prime except from 2.
        if (s_current >= MAX_PRIME)
        {
            return 0; // error, numner is too big.
        }
    }

    s_current = s_current+2; // increase to the next call.

    return s_current-2;

}

