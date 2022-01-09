#pragma once
#include<limits.h>

/**
* @file Prime.h
* @brief header file for Prime. contains the type of the prime, and the function to generate it.
* @author Gil Kovshi
*/

/**
* @brief the type of the prime in all this program.
* the type is unsigned- because we dont want negatives.
* it's also long long, because we useally use big primes.
* @author Gil Kovshi
*/
typedef unsigned long long prime_t;


/**
* @brief the biggest prime that can be stored in the prime_t type.
* @author Gil Kovshi
*/
#define MAX_PRIME ULLONG_MAX


/**
* @brief calculates and returns the next prime. e.g. in the first run- returns 2, in the second-3.
* @return the I'th prime number, where I is the amount of calling to this funciton. 0 if any error was ocuored.
* @author Gil Kovshi
*/
prime_t GetNextPrime(void);