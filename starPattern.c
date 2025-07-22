#include <stdio.h>

int main(){
    int m,n;
    printf("Enter 0 for triangular star pattern and 1 for reversed traingular star pattern: ");
    scanf("%d",&m);

    printf("\nEnter n: ");
    scanf("%d",&n);

    switch(m){
        case 0: 
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                printf("* ");
            }
            printf("\n");
        }
        break;

        case 1:
        for(int i=1; i<=n; i++){
            for(int j=n; j>=i; j--){
                printf("* ");
            }printf("\n");
        }
        break;

        default: printf("\nEnter a valid number");
    }
}