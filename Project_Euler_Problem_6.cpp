#include <iostream>
//this library allows me to use the absolute value for the difference function
#include <cstdlib>
using namespace std;

int main() {
    int n = 100;
    int sum_square = 0;
    int square_sum = 0;

    for(int i = 1; i <= n; i = i + 1){
        sum_square += i*i;
        square_sum += i;
    }
    square_sum = square_sum*square_sum;
    int difference = abs(square_sum - sum_square);
    return difference;
}
