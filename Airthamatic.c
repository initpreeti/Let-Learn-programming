#include <stdio.h>
void sum(int a , int b ){
   int c = a+b;
   printf("the value is :-%d",c,"\n");
}
void sub (int a , int b){
    int c = a-b;
    printf("the value is:- %d",c,"\n");
}
void multi(int a , int b){
    int c = a*b;
    printf("the value is :- %d",c,"\n");
}
void div(int a , int b){
    int c = a/b;
    printf("the value is :- %d",c,"\n");
}
int main(){
  sum(21,23);
  printf("\n");
  sub(23,45);
  printf("\n");
  multi(10,6);
  printf("\n");
  div(10,5);
  printf("\n");
  return 0;
}