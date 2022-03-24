#include <stdio.h>
#include <cs50.h>
//less comfortable
int main(void){
    int n=0;
    do
    {
        n=get_int("Height: ");
    }
    while(n<1||n>8);

    for (int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");//printf
        }
        for(int k=0;k<i;k++){
           printf("#");
        }
        printf("\n");
    }
}

