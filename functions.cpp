#include <iostream>
#include <cmath>
using namespace std;

//  Function 1

int sub(int a , int b)
{
    int s = a - b;
    return s;
}

// Function 2

int min(int n1 , int n2)                    // Parameters
{
    if(n1 < n2)
    {
        return n1;
    }
    else 
    {
        return n2;
    }
}

// Funtion 3

int sum(int n)
{
    int sum = 0;
    for (int i=1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}

// Function 4

int fact (int N)
{
    int factorial = 1;
    for (int j=1; j<=N; N--)
    {
        factorial *= N;
    }
    return factorial;
}

int digitSum (int num)
{
    int Digitsum = 0;
    int lastDigit;
    while (num > 0)
    {
        lastDigit = num % 10;
        num = num / 10;
        Digitsum += lastDigit;
    }
    return Digitsum;
}

int test(int a, char b, double c, int d)
{
    cout << "a = " << a <<  " b = " << b << " c = " << c << " d = " << d << endl;
    return a + d;
}

double two(double, double);

int check(char a)
{
    if(a>='A' && a<='Z')
    return true;
    else
    return false;
}

int numbers(double num1, double num2, double num3)
{
    int power = pow(num2,num1);
    if (power == num3)
    return true;
    else
    return false;
}

int check(double , double , double );

int main()
{
    int num1 , num2;                    // Actual values / Arguments
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;

    cout << "Subtraction = " << sub(num1, num2) << endl;
    cout << "Minimum = " << min(num1 , num2) << endl;

       cout << "Sum = " << sum (20) << endl;
       cout << "Sum = " << sum (30) << endl;

    cout << "Factorial = " << fact (5) << endl;
    cout << "Factorial = " << fact (4) << endl;    

    int num = 2563;
    cout << digitSum(num) << endl;


    int result = test(5,'z',7.3,5);
    cout << result << endl;

    cout << two(17.5,18.3) << endl;

    char character;
    cout <<"Enter a character : ";
    cin >> character;

    cout << check(character);

    double x , y , z;
    cout << numbers(3,2,8) << endl;

    double a , b , c;
    a = 12.5;
    b = 2.5;
    c = 2.0;

    cout << check(a,b,c) << endl;
    
    return 0;
}

double two(double a, double b)
{
    cout << "a = " << a << " b = " << b << endl;
    return a * b;
}

int check(double num1, double num2, double num3)
{
    cout <<"Num 1 = " << num1 << " Num 2 = " << num2 << " Num 3 = " << num3 << endl;
    return (num1 + num2) * num3;
}