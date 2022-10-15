
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    unsigned base;
    unsigned targetBase;
    unsigned input;
    unsigned converted = 0;
    unsigned targetNum = 0;

    scanf_s("%d",&base);
    scanf_s("%d",&targetBase);
    scanf_s("%x",&input);
    
    unsigned tempdigit;
    unsigned digitCount=0;

    while(input > 0){
        tempdigit = input%16;
        converted += tempdigit * pow(base,digitCount++);
        input /= 16;
    }
    /*
    digitCount = 0;
    while (converted > 0) {
       tempdigit = converted % (int)(pow(targetNum,digitCount));
       targetNum += tempdigit * pow(16,digitCount);
       converted -= pow(targetNum,digitCount);

       digitCount++;
    }
    */
    
    while(converted > 0){
        tempdigit = converted%10;
        printf("%d aaa %d",converted,converted%10);

        targetNum += tempdigit * pow(base,digitCount++);
        converted /= 10;
        printf("%d \n",tempdigit);

    }
    
    /*
    int decLen = log10(targetNum) + 1;
    int digitArr[decLen];

    for(int i=decLen;i>0;i--){

        digitArr[i] = converted / pow(targetBase,i);
        converted -= converted*digitArr[i];
    }
    printf("\n");
    for(int i = decLen; i>=0 ;i-- ){
        printf("%x",digitArr[decLen]);
    }
    */
    
}
