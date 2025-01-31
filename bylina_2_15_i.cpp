//
// Created by bylin on 31.01.2025.
//
//
// Created by bylin on 31.01.2025.
//


//
// Created by bylin on 31.01.2025.
//
//
// Created by bylin on 31.01.2025.
//


#include <iostream>
using namespace std;


float al(int n)
{
    float sum = 1;
    int var = 1;

    for (int i = 1; i <= n; i++) {
        var = 1;
        for (int j = 1; j <= n; j ++) {
            var *= i;
        }
        sum *= 1.0 / (1.0 + var);
    }
    return sum;
}

int main(){
    int n = 5;
    float sum = al(n);
    cout << sum << endl;
}