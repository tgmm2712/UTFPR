#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[]= {4,9,13};
    for(int j= 0;j<3;j++){
        printf("%d\n",*mat + j);
    }
}