#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int a = 0;
    float sum1 = 0;
    float sum2 = 0;
    string t;
    ifstream source("score.txt");
    while(getline(source, t)){
        sum1 += atof(t.c_str());
        sum2 += pow(atof(t.c_str()), 2);
        a++;
        }
    source.close();
    cout << "Number of data = " << a << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum1/a << "\n";
    cout << "Standard deviation = " << sqrt(sum2/a - pow(sum1/a, 2)) << "\n";
    return 0;
}
