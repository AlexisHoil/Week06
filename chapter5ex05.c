#include <stdio.h>


char line[100];
float radius;
float volume;
float pi;
float radius1;


int main(void) {


  printf("Enter the radius of the sphere with 2 decimals: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &radius);
  
  radius1= radius * radius * radius;
  pi=3.1416;
  volume= ((4.0/3.0) * pi) * radius1;
   printf("The volume of sphere is %.2f", volume);
 
  return 0;
}
