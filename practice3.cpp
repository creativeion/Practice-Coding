#include <iostream>
using namespace std;

int main()
{
    for (int i = 2; i <= 10; i++)
    {
        bool isPrime = true; // Assume i is prime initially
        for (int j = 2; j <= i / 2; j++) // Loop till half of i
        {
            if (i % j == 0) // If i is divisible by any number other than 1 and itself
            {
                isPrime = false; // It's not prime
                break; // No need to check further, break out of the loop
            }
        }
        if (isPrime) // If i is still prime
        {
            cout << i << " "; // Print the prime number
        }
    }
    return 0;
}
