#include <iostream>
#include <math.h>
using namespace std;
//project euler problem 3


//creating a function to find out and print what the prime factors of a number are
void primeFactors(long long n)
{
    //while n is divisible by 2, print 2 and divide n by 2
    while(n%2 == 0){
        cout << 2 << " ";
        n = n/2;
    }
    //n must be odd at this point so we can skip one element which is why we do i + 2
    for (int i = 3; i < sqrt(n); i = i + 2){
        //while i divides n, print i and divide n
        while (n%i == 0){
            cout << i << " ";
            n = n/i;
        }
    }
    // this is to handle the case when n is a prime number greater than 2
    if (n > 2)
    cout << n << " ";
}

int main() {
    long long int n = 600851475143;
    primeFactors(n);
    return 0;
}
