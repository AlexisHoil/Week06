#include <stdio.h>
char line[100];
int centigrates;
float convert;


int main(void) {

  
  printf("Enter centigrates: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &centigrates);
  
  convert= (9.0/5.0) * centigrates + 32.0;
   printf("The %d centigrates is %f fahrenheit\n", centigrates, convert);
 
  return 0;
}
