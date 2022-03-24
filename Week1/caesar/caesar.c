#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(int argc,string argv[]){

   if(argc ==2){
    for(int i =0;i<strlen(argv[1]);i++){
    if(isdigit(argv[1][i])){
    }else{
        printf("Usage: ./caesar key");
        return 1;
        break;
    }
    }
    int key =atoi(argv[1]);
    string txt = get_string("plaintext: ");
    for(int i =0;i<strlen(txt)+1;i++){
        if(isalpha(txt[i])){
            if(isupper(txt[i])){
                txt[i]=((txt[i]+key-64)%26)+64;
            }else if(islower(txt[i])){
                txt[i]=((txt[i]+key-96)%26)+96;
            }
        }
    }
            printf("ciphertext: %s\n",txt);
   }else{
       printf("Usage: ./caesar key");
       return 1;
   }

}