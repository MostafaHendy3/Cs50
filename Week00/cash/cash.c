#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(){
    float n=0;
    do
    {
        n=get_float("Change owed: ");
    }
    while(n<0);
    
    n=round(n*100.0);
    int res=0;
    res=n/25;
    n=(int)n%25;
    res+=n/10;
    n=(int)n%10;
    res+=n/5;
    n=(int)n%5;
    res+=n;

printf("%d\n",res);




}