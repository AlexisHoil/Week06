#include <stdio.h>


char line[100];
int hour;
int minut;
int convert;
int total;


int main(void) {


  printf("Enter hours and minutes: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &hour, &minut);
  
  convert= hour * 60;
  total= convert + minut;
  printf("%d hour and %d min are %d minutes", hour, minut,total);
 
  return 0;
}
