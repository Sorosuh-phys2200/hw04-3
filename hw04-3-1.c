#include <math.h>
#include <stdio.h>
#include <time.h>
#define N 45
long fibonacci(int);
int main(void)
{
int i;
long l;
clock_t begin, end;
double time_spent;
begin = clock();
for(i = 0; i < N; i++)
{
l = fibonacci(i);
printf("%4d %20ld\n", i, l);
}
end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("%f sec\n", time_spent);
return 0;
}
long fibonacci(int n)
{
double s = (1 + sqrt(5))/2;
double t = (1 - sqrt(5))/2;
return lround((1/sqrt(5))*pow(s, n) - (1/sqrt(5))*pow(t, n));
}
