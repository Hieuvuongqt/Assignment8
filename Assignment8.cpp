#include <stdio.h>
 
int main(){
    int a[100];
    int n;
    printf("\nEnter the number of elements n = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nRe-enter n = ");
        }
    }while(n <= 0);
    
    for(int i = 0; i < n; i++){
        printf("\nEnter a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    
    int Sum;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                Sum = a[i];
                a[i] = a[j];
                a[j] = Sum;        
            }
        }
    }
    
    
    printf("\nThe sorted array is: ");
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
    
    
}
