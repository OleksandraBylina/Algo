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
    float  sum = 1;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum *= 1.0 / (1.0 + fact);
    }
    return sum;

}

int main(){
    int n = 5;
    float sum = al(n);
    cout << sum << endl;
}