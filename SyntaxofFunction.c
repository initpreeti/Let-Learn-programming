                 // Syntax of function in c
#include<stdio.h>
 /*  return type       parameter type 
      |                |                                 */
    int     sum     (int a,int b); // <--- Function Declaration and A function in c always be declared Globally before calling it                
   /*         |                   |  
       Function name       statement semicolon     
             |  the function definition  consists of actual statements which are executed when the function is called (i.e when the program control comes to the function*/
    int     sum       ( int a, int b) // <--- Function Definition and  No Semicolon    
    {  // open curly bracket this  means let's Writing the statement
                  //  statements 
                    return a+b;     
    }   // close curly bracket means close the body of the statement   
    int main() { 

      int add = sum( 12,30); // function calling of function definition and execute the function statement will be executed.
    
      printf(" sun of two number:%d",add);
      return 0;
    }    
    