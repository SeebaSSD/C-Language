//To Differentiate iterative and recursive approach to solve the fibonacci

#include <stdio.h>

int fibonacci(int num){
    if (num == 1) {
        return 0;
    } else if (num == 2) {
        return 1;
    }else{
        return fibonacci(num-1) + fibonacci(num - 2);
    }
}
int main(){
    int num, f1, f2,sum;
    printf("Enter number: ");
    scanf("%d",&num);
    f1 = 0;
    f2 = 1;

    //Using Iteration
    printf("Printing the fibonacci series using loop:\n ");
    if(num == 1){
        printf("%d\n ",f1);
    }else if(num == 2){
        printf("\n%d\t%d\n",f1,f2);
    }else{
        printf("\n%d\t%d",f1,f2);
        for(int i = 3; i<=num; i++){
            sum = f1 + f2;
            f1 = f2;
            f2 = sum;
            //printf("\t%d",sum);
        }
        printf("%d\n",sum);
        printf("\n");
    }

    int num2 = fibonacci(num);
    printf("The %dth fibonacci number (using recursion) is %d\n",num, num2);
    return 0;
}