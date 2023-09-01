#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//time complexity= O(n),space complexity=O(1)
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
    int Key =6; // the element yoy want search for
    int result= linear_search(arr,Key,size);
    if(result!=-1){
        printf("Element%d found at index %d\n",Key,result);
    }
else{
    printf("Element %d not found in the array\n",Key);

}
    // code completed
    return 0;
}