#include <iostream>
using namespace std;

class Gcd 
{
    private:
        int num1;
        int num2;
        int gcdResult;

    public:
        Gcd(int n1, int n2) : num1(n1), num2(n2), gcdResult(1) {}

        void calculateGcd() {
            int smaller = (num1 < num2) ? num1 : num2;

            for (int i = 1; i <= smaller; ++i) {
                if (num1 % i == 0 && num2 % i == 0) {
                    gcdResult = i;
                }
            }
        }

        void printGcd() {
            cout << "The greatest common divisor of the numbers " << num1 << " and " << num2 << " is: " << gcdResult << endl;
        }
};

int main() {
    int num1, num2;
    cout << "Input two numbers: ";
    cin >> num1 >> num2;

    Gcd gcd(num1, num2);
    gcd.calculateGcd();
    gcd.printGcd();
}
