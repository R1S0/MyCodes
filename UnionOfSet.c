#include<stdio.h>
void main(){
    int a, b, arr1[20], arr2[20], C[40];
    printf("Enter the number of elements in array A and B : ");
    scanf("%d %d", &a, &b);

    for(int i=0; i<a; i++){
        scanf("%d", &arr1[i]);
    }

    for(int i=0; i<b; i++){
        scanf("%d", &arr2[i]);
    }
    
    for(int i=0; i<a; i++){
        C[i] = arr1[i];
    }
    for(int i=a; i<(a+b); i++){
        C[i] = arr2[i-a];
    }

    for(int i=0; i<(a+b); i++){
        printf("%d ", C[i]);
    }
}