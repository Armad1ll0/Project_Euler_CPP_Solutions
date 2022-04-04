#include <iostream>
using namespace std;

//project Euler problem 2
int main() {
    // initialising the first constants we need
    int a = 1;
    int b = 2;
    int next = 0;
    int sum = 0;

    //setting a while loop to iterate up to the value we need
    while(b <= 4000000){
        //checking the condition we need
        if (b%2 == 0)
            //adding it if the condition is satisfied
            sum += b;
        //resetting the constants needed for the next iteration of the while loop
        next = a + b;
        a = b;
        b = next;
    }
    // getting it to return the sum of the even fibonacci sequence numbers
    cout << sum << endl;
    return 0;
}
