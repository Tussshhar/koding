#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

void addFraction(int num1, int den1, int num2, int den2) {
    int lcm = (den1 * den2) / gcd(den1, den2);

    int numerator = (num1 * (lcm / den1)) + (num2 * (lcm / den2));
    int denominator = lcm;

    int g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;

    cout << numerator << "/" << denominator << "\n"; 
}
