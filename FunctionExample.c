#include<stdio.h>
// non perameterise function
void wish(){
    printf("good morning mam!\n");
}
void addition(int a , int b ){
    int c = a+b;
    printf("%d",c);
}
int main(int argc, char const *argv[])
{   
    wish();
    int a = 21;
    int b = 23;
    addition(a,b);
    
    return 0;
}
