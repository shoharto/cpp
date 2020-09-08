
#include <stdio.h>
double hypotenusethat(double side1, double side2); // function prototype

int main()
{
    double s1, s2, calcu;

    printf("Enter The Two Side of Triangle: ");
    scanf("%lf %lf", &s1, &s2);

    calcu = hypotenusethat(s1, s2); // function call
    printf("calcu = %lf", calcu);

    return 0;
}

double hypotenusethat(double side1, double side2) // function definition
{
    int result;
    result = (0.5) * side1 * side2;
    return result; // return statement
}