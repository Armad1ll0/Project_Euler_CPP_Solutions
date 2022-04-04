#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    for(a = 1; a <= 1000; a+=1){
        for(b = 1; b <= 1000; b+=1){
            for(c = 1; c <= 1000; c+=1){
                if(a*a + b*b == c*c and a+b+c==1000 and a < b and b < c){
                    cout << a << b << c << endl;
                    return a*b*c;

                }
            }
        }
    }
    return 0;
}
