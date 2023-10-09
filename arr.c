#include<stdio.h>

int main(){
   int ar[]= {1,2,3,4,5,6,7,8};

    for (int i = 0 ; i< 8 ; i++){
        if(i%2==0){
         printf("%d ",ar[i]*2);
        }
    }

   return 0;

}