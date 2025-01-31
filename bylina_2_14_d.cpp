//
// Created by bylin on 31.01.2025.
//


#include <iostream>
using namespace std;


int al(int n)
{
    int sum = 0;
    int q = 1;
    for (int i = 1; i <= n; i++)
    {
        q = 1;
        for (int j = 1; j <= i; j++){
            q *= i;
        }
        sum += q;
    }

    return sum;

}

int main(){
    int n = 3;
    int sum = al(n);
    cout << sum << endl;
}