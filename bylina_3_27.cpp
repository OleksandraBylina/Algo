//
// Created by bylin on 02.02.2025.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_number = n;
    int cycles = log2(n) + 1;
    for (int i = 1; i <= cycles; i++){
        n = ((n << 1) & ((1 << cycles) - 1)) | (n >> (cycles - 1));
        if (n > max_number)
        {
            max_number = n;
        }

    }
    cout << max_number;
}