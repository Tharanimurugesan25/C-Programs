#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the values of a,b,c");
scanf("%d""%d""%d",&a,&b,&c);
if((a>b)&&(a>c)){
printf("The value of a is greater");
}
else if((b>a)&&(b>c)){
printf("The value of b is greater");
}
else{
printf("The value of c is greater");
}
return 0;
}
