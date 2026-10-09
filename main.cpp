#include <iostream>

int main()
{
    // Simple program to calculate the hypotenuse of a right-angled triangle

    double a; // Side A
    double b; // Side B
    double result;

    std::cout << "Enter side 'A': ";
    std::cin >> a;

    std::cout << "Enter side 'B': ";
    std::cin >> b;

    result = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypotenuse is " << result << std::endl;

    return 0;
}
