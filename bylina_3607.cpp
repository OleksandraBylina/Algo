//
// Created by bylin on 02.02.2025.
//


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void counting(vector<string> vec1, vector<string> vec2, vector<string> vec3)
{
    int num = stoi(vec1[0]);

    vector<int> heights;
    for (int i = 0; i < vec2.size(); i++) {
        string numStr;
        for (char ch : vec2[i]) {
            if (isdigit(ch)) {
                numStr += ch;
            } else if (!numStr.empty()) {
                heights.push_back(stoi(numStr));
                numStr = "";
            }
        }
        if (!numStr.empty()) {
            heights.push_back(stoi(numStr));
        }
    }

    string numStr;
    vector<int> intervals;
    for (char ch : vec3[0]) {
        if (isdigit(ch)) {
            numStr += ch;
        } else if (!numStr.empty()) {
            intervals.push_back(stoi(numStr));
            numStr = "";
        }
    }
    if (!numStr.empty()) {
        intervals.push_back(stoi(numStr));
    }

    int first_interval = intervals[0];
    int last_interval = intervals[1];

    int counter = 0;
    for (int i = 0; i < heights.size(); i++) {
        if (heights[i] >= first_interval && heights[i] <= last_interval) {
            counter++;
        }
    }
    cout << counter << endl;
}

void reader()
{
    ifstream file(R"(C:\Users\bylin\CLionProjects\untitled\cmake-build-debug\algo\input.txt)");
    if (!file) {
        cerr << "error" << endl;
        return;
    }

    vector<string> data1, data2, data3;
    string line;
    int counter = 1;

    while (getline(file, line)) {
        if (counter % 3 == 1) {
            data1.clear();
            data1.push_back(line);
        } else if (counter % 3 == 2) {
            data2.clear();
            data2.push_back(line);
        } else {
            data3.clear();
            data3.push_back(line);
            counting(data1, data2, data3);
        }
        counter++;
    }
}


int main()
{
    reader();
}
