#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((j == i)||(j == n-i-1)){
                printf("X ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}