#include <iostream>
using namespace std;

//Project Euler problem 1
int main() {

    //storing the sums of each summation
    int multsofThreeSum = 0;
    int multsofFiveSum = 0;
    int multsofFifteenSum = 0;

    //makign three different for loops to go over each sum
    for(int i = 3; i< 1000; i = i + 3) {
        multsofThreeSum = multsofThreeSum + i;
    }

    for(int i = 5; i< 1000; i = i + 5) {
        multsofFiveSum = multsofFiveSum + i;
    }

    for(int i = 15; i< 1000; i = i + 15) {
        multsofFifteenSum = multsofFifteenSum + i;
    }


    cout << multsofThreeSum + multsofFiveSum - multsofFifteenSum << endl;
    return 0;
}
