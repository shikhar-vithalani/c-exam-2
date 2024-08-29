#include<stdio.h>

void main(){

int row,column;

printf("Enter row : ");
scanf("%d",&row);

printf("Enter Column : ");
scanf("%d",&column);
printf("\n");
int array[row][column];

for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        printf("a [%d] [%d]= ",i,j);
        scanf("%d",&array[i][j]);
    }
}



int sum=0;

for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){{
        sum= sum + array[i][j];
    }
}
}
printf("\nThe sum of matrix : %d\n",sum);
}
