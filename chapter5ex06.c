#include <stdio.h>


char line[100];
int hour;
int minut;
int minutes;



int main(void) {


  printf("Enter minutes: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d",&minut);
  
  hour= minut/60;
  minutes= minut - (hour * 60);
  printf("%d hour and %d minutes", hour, minutes);
 
  return 0;
}
