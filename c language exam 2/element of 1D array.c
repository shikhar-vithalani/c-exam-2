#include<stdio.h>

void main(){

int column;



printf("Enter Column  : ");
scanf("%d",&column);
printf("\n");
int array[column];


    for(int j=0;j<column;j++){
        printf("a[%d]= ",j);
        scanf("%d",&array[j]);
    }




int sum=0;

    for(int j=0;j<column;j++){
         sum += array[j];
    }
printf("\nThe sum of the all element : %d\n",sum);
}
