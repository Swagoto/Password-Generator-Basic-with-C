#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int passSize;
    char alpabhet[]="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&-+=|\:;>.,<";

    printf("How many characters do you want in your password(6-30)\n");
    scanf("%d", &passSize);

    char password[passSize];

    if(passSize>=6 && passSize<=30){
        for(int i=0; i<passSize; i++){
            password[i]= alpabhet[rand() % strlen(alpabhet)];
            printf("%c", password[i]);
        }
    }
    else{
        printf("please choose an valid number between 6-30");
    }
    return 0;
}
