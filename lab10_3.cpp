#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ifstream data("score.txt");

    int i = 0;
    float sum = 0, sum_sq = 0;
    string v;
    while (getline(data, v)) {
        sum += stof(v);
        sum_sq += stof(v) * stof(v);
        i++;
    }
    cout << "Number of data = "<<i<<"\n";
    cout << setprecision(3);
    float mean = 1.0 * sum/i;
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<sqrt(1.0 * sum_sq/i - mean * mean);

    data.close();
}