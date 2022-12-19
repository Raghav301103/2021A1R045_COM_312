#include<unistd.h>
#include<sys/types.h>
#include<errno.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
int main(void)
{
int var=1;
int *p=(int *)malloc(2);
pid_t PID=fork();
*p=0;
if(PID>=0)
{
if(PID==0)
{
printf("\n Child process:\n Initial value=%d",var);
var=5;
printf("\n New value of var =%d",var);
printf("\n Address of malloc in child =%p",p);
printf("\n Address of  var in child=%p\n",&var);
}
else
{
printf("\n \n Parent process:\n Initial  value=%d",var);
var=10;
printf("\n New value=%d",var);
printf("\n Address of  malloc in parent=%p",p);
printf("\n Address of var in child=%p\n",&var);
}


}
return 0;
}
