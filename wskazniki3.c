#include <stdio.h>
int main(void){
  
  //W C stringi to tablice znakow
  char my_string[40];
  my_string[0]='T';
  my_string[1]='e';
  my_string[2]='d';
  my_string[3]='\0'; // binarne zero, nul character, nie mylic z NULL.
  
  // Rowniez dozwolone i bardziej wygodne. Zwroc uwage na apostrofy i cudzyslowy

  //char my_string[40] = {'T', 'e', 'd', '\0',};
  //char my_string[40] = "Ted";  // '\0' dodawane automatycznie
}
