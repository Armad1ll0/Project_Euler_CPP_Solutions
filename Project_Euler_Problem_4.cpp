#include <iostream>
using namespace std;

//function to find out if a number is palindromic
int makePalindrome(int x)
{
    int rev = 0;
    int rem;
    int n = x;
    do
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;

    }while (n != 0);
    return rev;
}

int main() {
    int product = 0;
    int palindrome = 0;
    int biggest = 0;

    // this iterates through all the possible sums between a and b both between 10 and 99
    for(int a = 10; a < 1000; a = a + 1){
        for(int b = 10; b < 1000; b = b + 1){
            product = a*b;
            if(product == makePalindrome(product)) {
                cout << "The product of these 2 numbers makes a palindrome " << a << " " << b << " and the palindrome is " << product << endl;
                if(makePalindrome(product) > biggest){
                    biggest = product;
                }
            }
        }
    }
    cout << biggest << endl;
    return 0;
}
