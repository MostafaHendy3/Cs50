#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    string input=get_string("Text: ");
    int let_count =0;
    int word_count=1;
    int sen_count=0;
    for(int i =0;i<strlen(input);i++){
        if(isalpha(input[i])){
            let_count++;
        }
        else if(input[i]=='.'||input[i]=='?'||input[i]=='!'){
            sen_count++;
        }
        else if(input[i]==' '){
            word_count++;
        }
    }

    float L=(let_count)/(float)word_count;
    float S=(sen_count)/(float)word_count;
    float index = 0.0588*L*100-0.296*S*100-15.8;
   
    int res =round(index);
    if(res>16){
        printf("Grade 16+\n");
    }else if (res<1){
        printf("Before Grade 1\n");
    }else{
        printf("Grade %d\n",res);
    }


}