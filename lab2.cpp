#include <iostream>


/*
 * lab. 2,  zadanie nr 5
 */


unsigned long long factorial(int n)
{
    if (n==1) return 1;
    else if(n<0) return 0;
    else return n*factorial(n-1);
}

unsigned long long forfactorial(int n)
{
    if (n==1) return 1;
    else if(n<0) return 0;
    else {
        int i, result;
        result = 1;
        for (i = 1; i <= n; i++) {
            result = result * i;
        }
        return result;
    }
}

int main() {
    int a = 0, method = 0;
    double timeSpent = 0.0;
    puts("1. for loop \n2. resursion");
    scanf("%d", &method);
    puts("calculate a factorial of: \n");
    scanf("%d", &a);
    if(a<0) {
        puts("cant calculate factorial of negative number");
        return 0;
    }
    switch(method){
        case 1:
            printf("calculation factorial of %d with for loop\n", a);
            printf("%d!=%llu", a, forfactorial(a));
            break;
        case 2:
            printf("calculation factorial of %d with recursion\n", a);
            printf("%d!=%llu", a, factorial(a));
            break;
        default:
            puts("wrong selection, select 1 or 2");
            break;
    }
    return 0;
}
