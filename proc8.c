//proc8

#include <stdio.h>  
#include <time.h>
#include <stdlib.h>

void add(int D, int K)
{
    int first, last, random, result1, result2;
        srand(time(0));
        
        for(D=1; D<=9; D++){
        random=rand()%9+1;}
        printf("D is %d\n", random);
        
        last=K%10;
        first=K/1000;
        printf("The first number is  %d\n", first);
        printf("The last number is  %d\n", last); 

        result1=first+random;
        result2=last+random;
        printf("Adding to the left will result: %d\n", result1);
        printf("Adding to the right will result: %d\n", result2);
    }   

int main(){
int D, K;
    
    printf("Enter K number: \n");
    scanf("%d", &K);
        
    add(D, K);
    
    return 0;
}