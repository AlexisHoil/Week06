#include <stdio.h>


char line[100];
float width;
float height;
float perimeter;


int main(void) {


  printf("Enter width and height with 2 decimals: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f %f", &width, &height);
  
  perimeter= 2* (width + height);
  printf("The perimeter is %.2f\n", perimeter);
 
  return 0;
}
