#include <iostream>
using namespace std;

//defining a
bool isPrime(int x){
    int num = x;
    bool flag = true;
    for(int i = 2; i <= num/2; i++){
        if(num%i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    int i = 3;
    int target = 10001;
    int stop = target - 1;
    int prime_counter = 1;
    while(prime_counter <= stop){
        if(isPrime(i) == true){
            prime_counter += 1;
        }
        i = i + 1;
    }
    return i;
}
