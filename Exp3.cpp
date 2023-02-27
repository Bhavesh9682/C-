#include <iostream>
using namespace std;
class StaticDemo
{
public:
    static int factorial(long int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }
    static bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    long int n;
    cout << "Enter the Number : ";
    cin >> n;
    int fact = StaticDemo::factorial(n);
    bool prime = StaticDemo::isPrime(n);
    cout << "Factorial of " << n << " is " << fact << endl;
    cout << n << " is " << (prime ? "prime" : "not prime") << endl;
    return 0;
}
