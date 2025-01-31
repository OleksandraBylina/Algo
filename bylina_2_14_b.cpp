//
// Created by bylin on 31.01.2025.
//

#include <iostream>
using namespace std;

int al(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += i * i;
    }
    return sum;

}

int main(){
    int n = 3;
    int sum = al(n);
    cout << sum << endl;
}