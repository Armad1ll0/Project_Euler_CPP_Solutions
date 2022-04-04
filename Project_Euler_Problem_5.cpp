#include <iostream>
using namespace std;

//function to check if a number is divisible by all numbers between 1 and n
int divisibleTotal(int x)
{
    int num = x;
    int n = 20;
    int total = 0;

    for(int i = 1; i <= n; i = i + 1){
        if (num%i==0){
            total = total + 1;
        }
    }

    return total;
}

//and then iterating through all of the numbers until our total criteria is met.
int main() {
    int i = 20;
    int criteria = 20;

    while(divisibleTotal(i) != criteria){
        i = i+20;
        if(i%1000000 == 0){
            cout << i << endl;
        }
    }

    return i;
}
