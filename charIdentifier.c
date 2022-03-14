#include <stdio.h>

int main() {
  char c;
  printf("Enter a character:");
  scanf("%c",&c);
  if(c >65 && c<=90){
    printf("Capital letter");
  }
  else if ( c>= 97 &&c <=122){
    printf("Small letter");
  }
  else if (c>=48 && c<=57){
      printf("number");
  }
  else{
    printf("Special character");
  }
  return 0;
}