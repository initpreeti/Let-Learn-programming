#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// timecomplexity = O(n) , space complexity = O(1)
int linear_search(int arr[], int key, int size){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(int argc, char *argv[]){
    int arr[] = {1,23,12,6,4,32,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("size of array is %d\n", size);
    // please complete rest of code.
    return 0;
}