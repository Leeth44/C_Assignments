#include <stdio.h>

int main(void) {
   int userNum;
   int userNum2;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   /* Type your code here. */
   printf("You entered: %d\n", userNum);
   printf("%d squared is %d\n", userNum, userNum * userNum);
   printf("And %d cubed is %d!!\n", userNum, userNum * userNum * userNum);
   
   printf("Enter another integer:\n");
   scanf("%d\n", &userNum2);
   printf("4 + %d is %d\n", userNum2, userNum2 + 4);
   printf("4 * %d is %d\n", userNum2, userNum2 * 4);
   
   return 0;
}