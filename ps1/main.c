#include <stdio.h>

int digitsum(int a); //declaring the function
int num; //variable to take the number input

int main()
{
    printf("Enter a 8 digit number: ");
    scanf("%d", &num);

    printf("The sum of the digits is: %d", digitsum(num));
    printf("\n\n\n");
    return 0;
}

//defining the function
int digitsum(int a){
    int digit[100];
    int n = 0, m = 0;
    int sum = 0;

    //using arithmetic to get the digits sum
    while (num!=0){
        digit[n] = num%10;
        num = num - num%10;
        num = num/10;
        n++;
    }
    m = n-1;
    while(m>=0){
        sum = sum +digit[m];
        m--;
    }
    return sum;
}
