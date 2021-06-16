#include <stdio.h>


char line[100];
float kilometer;
float convert;


int main(void) {


  printf("Enter kilometers per hour with maximun 2 decimals: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &kilometer);
  
  convert= kilometer * 0.6213712;
  printf("The %.2f kilometers per hour is equal to %.2f miles", kilometer, convert);
 
  return 0;
}
