#include <stdio.h>

double exponential(double x);

int main(void)
{
double exp,x;
printf("Valor de x :");
scanf("%lf",&x);

exp=exponential(x);
printf("exp(%g) = %g\n", x, exp);

}

double exponential(double x){
int n=1;
double exp=0.0,term=1.0;

exp= term;
while(term>1e-7){

term*=x/n;
exp+=term;
n++;
}

return exp;

}