#include <stdio.h>

void area()
{
float base, height, result;

printf("Enter base: ");
scanf("%f", &base);

printf("Enter height: ");
scanf("%f", &height);

result = 0.5 * base * height;

printf("Area of triangle = %.2f\n", result);
}

int main()
{
area();

return 0;
}

5.2 Arguments, No Return Value
Program
#include <stdio.h>

void area(float base, float height)
{
float result;

result = 0.5 * base * height;

printf("Area of triangle = %.2f\n", result);
}

int main()
{

float base, height;

printf("Enter base: ");
scanf("%f", &base);

printf("Enter height: ");
scanf("%f", &height);

area(base, height);

return 0;
}

5.3 No Arguments, Returns a Value
Program
#include <stdio.h>

float area()
{
float base, height;
float result;

printf("Enter base: ");
scanf("%f", &base);

printf("Enter height: ");
scanf("%f", &height);

result = 0.5 * base * height;

return result;
}

int main()
{
float result;

result = area();

printf("Area of triangle = %.2f\n", result);

return 0;
}

5.4 Arguments, Returns a Value
Program
#include <stdio.h>

float area(float base, float height)
{
float result;

result = 0.5 * base * height;

return result;
}

int main()
{
float base, height;
float result;

printf("Enter base: ");
scanf("%f", &base);

printf("Enter height: ");
scanf("%f", &height);

result = area(base, height);

printf("Area of triangle = %.2f\n", result);

return 0;
}

