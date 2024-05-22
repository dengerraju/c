#include<stdio.h>

void main(){
    int a[] = {10,20,1,2,3,100,12};

    int x =0;
    while(x<7){
        printf("%d\n",a[x]);
        x++;
    }
    printf("\n\n\n");

    int m = 6;
    while(m>=0){
        printf("%d \n",a[m]);
        m--;
    }
}
