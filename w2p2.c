#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    while(scanf("%d %d",&i,&j)!=EOF){
          if(i == j){
            printf("It is a Square\n");
          }else{
            printf("It is not a Square\n");
          }

    }
}
