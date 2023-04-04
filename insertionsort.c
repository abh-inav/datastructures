#include<stdio.h>
int main(){
    int array[]={120,45,6,3,23,5,34,2,5,453,535,53,4,3,5,63,4,3,3,545,6,34,23,34,34,3};
    int size=sizeof(array)/sizeof(array[0]);
     printf("before \n");
       for(int j=0;j<size;j++){
        printf("%d ",array[j]);
    }
    for(int i=1;i<size;i++){
        int key=array[i];
        int j=i-1;
        while(j >= 0 && array[j] > key){
                array[j+1] =array[j];
                j--;
        }
        array[j+1]=key;

    }
 printf("\nafter \n");
    for(int j=0;j<size;j++){
        
        printf("%d ",array[j]);
    }
}
