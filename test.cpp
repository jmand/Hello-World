#include <iostream>

using namespace std;
int factorial(int);


int main() {
    int fact;
    cout << "Please enter a positive integer: " << endl;
    cin >> fact;
    cout << factorial(fact);
    
    return 0;
}

int factorial(int x){
    if(x <= 1){
        return 1;
    }
        return x * factorial(x-1);
}
