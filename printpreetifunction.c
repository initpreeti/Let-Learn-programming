
// Function with no argument and no return value
#include<stdio.h>
void namste ( ); // function1 declaration
void bonjour (); // function2  declaration
int main(){
    printf(" enter f for french & i for indian :");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
    namste(); // function1 call
} 
 else{
    bonjour();  //function2 call
   
 }
return 0 ;
}
void namste()
{
    printf("Namashte\n");
}

void  bonjour()   // function2  definition

{
    printf(" bounjouri\n ");
}
























