#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,mid;
    mid=4;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(abs(mid-i)==j){
                printf("*");
            }
            else if (i+j==8){
                printf("*");
            }
            else if (i==1&&j==5){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
