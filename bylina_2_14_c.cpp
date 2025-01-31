//
// Created by bylin on 31.01.2025.

//

#include <iostream>
#include <cmath>
using namespace std;


int al(int n, int a)
{
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += a;
        a *= a;
    }
    return sum;

}

int main(){
    int n = 4;
    int a = 2;
    int sum = al(n, a);
    cout << sum << endl;
}