#include <stdio.h>
#include <stdlib.h>

void rightTriangleMaker(int);

void main(){
    int n;
    printf("--------------------------------------\n");
    printf("Welcome to the Triangle maker Program!\n");
    printf("--------------------------------------\n");
    printf("\nNOTE: if you are prepared to enter Big\n");
    printf("Number, you are free to use [ctrl + c]\n");
    printf("\nPlease enter size of Triangle you want\n");
    scanf("%d",&n);
    if(n != -1){
    printf("The number you entered is %d See below\nSo here is the size %d Triangle -->\n",n,n);
    } else{
    printf("\n--------------------------------------\n");
    printf("Sir You entered very very large number\n");
    printf("--------------------------------------\n");
    }
    rightTriangleMaker(n);
}

void rightTriangleMaker(int num){
    int i,j;
    for(i=1; i<=num; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
