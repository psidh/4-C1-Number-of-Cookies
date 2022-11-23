
#include <stdio.h>

int main(void) {
   // write your code here

  int days, cookie ;
  
  printf("To calculate how many cookies Parul gets from her brother.\n");
  printf("\n");

  printf("Enter the number of days Parul took to visit her parent's place after the agreement: \n");
  scanf("%i", days )

  cookie = (pow(2, (days - 1)))/ 2;
  printf("Rahul shares %i cookies with her sister Parul.\n", cookie);
  
  
  
  
  return 0;
}

