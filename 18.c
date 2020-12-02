#include <stdio.h>
int main() {

    int num, rem;
    int rev = 0;
    printf("Enter number: "); //23
    scanf("%d", &num); //23
    while (num != 0) {
        rem = num % 10; //3
        rev = rev * 10 + rem; // 0 + 3 
        num =num/ 10; // 23 ----> 2 then loop again
    }
    printf("Reversed number = %d\n", rev);
    
    return 0;
}