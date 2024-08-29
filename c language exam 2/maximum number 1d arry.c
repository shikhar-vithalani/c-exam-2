#include <stdio.h>

void main(){

int column;

printf("Enter Column : ");
scanf("%d",&column);

int array[column];

printf("Program : \n");

for(int i=0;i<column;i++){
    printf("a[%d]= ",i);
    scanf("%d",&array[i]);
}

int largest=array[0];



for(int i=0;i<column;i++){
    if(array[i]>largest){
        largest=array[i];
    }

}
printf("The Maximum Number : %d",largest);

}
