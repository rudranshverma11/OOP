#include <iostream>
using namespace std;
class Result
{
 public:
    void calculateAverage(int a, int b) 
    {
        cout << "Average of two integer marks:"
             << (a+b) / 2 << endl;
    }
    void calculateAverage(int a, int b, int c)
    {
        cout << "Average of three integer marks:"
             << (a+b+c) / 3 << endl;
    }
    void calculateAverage(float a, float b)
    {
        cout << "Average of two floating marks:"
             << (a + b) / 2 << endl;
    }
};

int main() {
    Result r;

    r.calculateAverage(80, 90);
    r.calculateAverage(70, 80, 90);
    r.calculateAverage(75.5f, 82.5f);

    return 0;
}
