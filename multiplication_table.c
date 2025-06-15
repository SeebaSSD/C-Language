#include <stdio.h>

int main(){
    int n;

    printf("\nEnter the number you want multiplication table of: ");
    scanf("%d",&n);

    printf("\nTable of %d: ", n);
    for(int i = 1; i<=10; i++){
        printf("\n%d X %d = %d",n,i,n*i);
    }
    printf("\n");
    return 0;
}