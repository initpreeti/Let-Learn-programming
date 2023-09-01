// if else statement
#include<stdio.h>
int main(){
float a ;
float b;
printf(" enter the any float value\n");

scanf("%f%f",&a,&b);
// Relational operation

if ( a>b){
    printf(" a is greater than b:\n" );
}
else{
    printf("a is less than to b:\n");
}
// grater than equal to
if (a>=b){
    printf(" a is greater than or equal to b\n");
}
else{
    printf(" a is lesser than b:\n");
}
// lesser than equal
 if(a<=b)
 {
    printf(" a is lesser than b:\n");
 }
else{
    printf(" a is greater than a:\n");
}
// equal to
if(a==b){
printf(" a is equal to b:\n");
}
else{
printf(" a is not equal to b:\n");
}
// not equal to
if(a!=b)
{
    printf(" a is not eqal to b:\n");
}
else{
    printf(" a is equal to b");
}
return 0;

}