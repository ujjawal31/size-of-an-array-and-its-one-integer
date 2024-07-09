#include <stdio.h>

int main() {
    
    int arr[]={10,20,30,40,50};
    
    int size = sizeof(arr); // size of an array 
    printf("The size of an array : is %d bytes\n",size);
    
    
   
       
    
    int n = sizeof(arr)/sizeof(arr[0]); // Number of elements in an array
    
    int sizeofint = size / n;   //size of an array arr(size) / number of elements in array(n)
    printf("The size of int datatype is %d btyes",sizeofint);



}