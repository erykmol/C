#include <stdio.h>
int main(void){

  int my_array[] = {1,23,17,4,-5,100};
  
  int i;
  ptr = &my_array[0]; //ustaw wskaznik na pierwszy element tablicy 
  //ptr = my_array;   // nazwa tablicy to adres jej pierwszego elementu
  
  printf("\n\n");
  
  for (i = 0; i < 6; i++)
  {
    printf("my_array[%d] = %d    ",i,my_array[i]);
    printf("*(ptr + %d) = %d ",i, *(ptr + i));
    //printf("*ptr++ = %d\n ", *ptr++);
    //printf("*(++ptr) = %d\n", *(++ptr));
  }
}
