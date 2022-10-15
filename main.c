
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
    
    int decLen = log10(converted) / log10(targetBase) + 1;
    int digitArr[decLen];


    for(int i=decLen;i>=0;i--){
        digitArr[i] = converted / pow(targetBase,i);
        converted -= pow(targetBase,i)*digitArr[i];
    }

    for(int i = decLen; i>=0 ;i-- ){
        printf("%x",digitArr[i]);
    }
    
    
}
