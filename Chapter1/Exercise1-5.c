#include<stdio.h>
// Modify the temperature conversion program to print the table in reverse order,
// that is, from 300 degrees to 0. 
#define UPPER 300
#define LOWER 0
#define STEP 20
int main(){
    float fahr, celsius;
    for(fahr = UPPER; fahr >=LOWER;fahr-=STEP){
        printf("%3.1f %6.1f\n",fahr,(5.0/9.0)*(fahr - 32.0));
    }
}