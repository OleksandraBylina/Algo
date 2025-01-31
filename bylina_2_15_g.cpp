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
    float  sum = 1;
    int fact = 1;
    int al = a;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        al *= a;
        sum *= 1.0 / (1.0 + fact);
    }
    return sum;

}

int main(){
    int n = 5;
    int a = 2;
    float sum = al(n, a);
    cout << sum << endl;
}