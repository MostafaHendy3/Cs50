#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(){
    string card=get_string("Enter card number:");

    for(int i=0;i<card.length();i+=2){
        printf("%s",card[i]);
    }
   printf("%s",card);
}