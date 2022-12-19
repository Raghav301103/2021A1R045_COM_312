#include <stdio.h>
#include <time.h>

void main(){
clock_t start, end;
double runTime;
start = clock();
int i, num=1, primes=0;

while ( num <= 10000){
i = 2;
while ( i<= num ) {
if(num%i==0)
break;
i++;
}
if(i=num)
primes++;
printf("%d prime number calculated\n",primes);
num++;
}
end=clock();
}
