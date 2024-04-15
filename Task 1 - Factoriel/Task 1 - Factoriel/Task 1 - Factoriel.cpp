#include <iostream>
using namespace std;

class Fact {
private:
    int number;
    int factorial;

public:
    Fact(int n) : number(n), factorial(1) {}

    void calculateFactorial() 
    {
        for (int i = 1; i <= number; ++i) 
        {
            factorial *= i;
        }
    }

    void printFactorial() 
    {
        cout << "The factorial of " << number << " is: " << factorial << endl;
    }
};

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;

    Fact fact(num);
    fact.calculateFactorial();
    fact.printFactorial();
}
