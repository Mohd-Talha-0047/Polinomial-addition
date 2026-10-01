#include<stdio.h>
int main(){
    int c1[100],c2[100],sum[100];
    int d1,d2,i,n;
    printf("Enter highest degree of first poltnomial: ");
    scanf("%d",&d1);
    printf("Enter coefficient of first polinomial from degree 0 to %d \n",d1);
    for(i=0;i<=d1;i++){
        scanf("%d",&c1[i]);
    }
    printf("Enter highest degree of second polinomial: ");
    scanf("%d",&d2);
    printf("Enter coefficient of second polinomial from degree 0 to %d \n",d2);
    for(i=0;i<=d2;i++){
        scanf("%d",&c2[i]);
    }
    n = d1;
    if (d2 > d1) {
        n = d2;
    }
    for(i = 0; i <= n; i++){
        sum[i] = c1[i] + c2[i];
    }
    printf("\nResultant Polynomial: ");
    for(i = n; i >= 0; i--){
        printf("%dx^%d", sum[i], i);
        if(i > 0){
            printf(" + ");
        }
    }
    printf("\n");

    return 0;
}