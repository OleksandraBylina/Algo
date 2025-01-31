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


float al(int n, int a)
{
    float sum = 1;
    int var = 1;

    for (int i = 1; i <= n; i++) {
        var = 1;
        for (int j = 1; j <= m; j ++) {
            var *= i;
        }
        sum *= 1 / (1 + var);
    }
    return sum;
}

int main(){
    int n = 5;
    int a = 2;
    float sum = al(n, a);
    cout << sum << endl;
}