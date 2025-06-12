#include<stdio.h>
int main(){
long long int a,i,fact=1;
printf("Enter the values of a:");
scanf("%lld",&a);
for(i=1;i<=a;i++){
fact=fact*i;
}
printf("The factorial of a given num is %lld",fact);
return 0;
}

