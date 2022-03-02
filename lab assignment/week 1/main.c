#include <stdio.h>

int main(){
     int array[100],key,n,c;
     printf("enter number of elements in array\n");
     scanf("%d",&n);

     printf("the %d elements are : \n",n);
     for(c=0;c<n;c++){
     scanf("%d",&array[c]);
     }
     printf("enter a key to search \n");
     scanf("%d",&key);

     for(c=0;c<n;c++){
        if(array[c]==key){
            printf("%d number is found at %d \n",key,c+1);
            break;
        }
    }
        if(c==n){
           printf("%d number is not found in array",key);
     }


     return 0;

}

