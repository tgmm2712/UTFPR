#include <stdio.h>
#include <stdlib.h>
#define int_max 2147483600

void merge_sorte(v,p,r){
    if (p<r){
        int q = (p + r)/2;

 
    merge_sorte(v,p,q);
    merge_sorte(v,q+1,r);
 
    }

}
void merge(v,p,q,r){
    int n1 = q-p+1;
    int n2 = r-q;
    int l[n1+1], r[n2+1];


}
int main(void){


}