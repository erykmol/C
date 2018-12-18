//#include <stdio.h>
//#include <string.h>

char strA[] = "A string to be used for demonstration purposes";
char strB[strlen(strA)];


int main(void){
  char *pA; 
  char *pB; 
  
  puts(strA); //int puts(const char *s), Funkcja wysyła na standardowe wyjście napis s, a następnie znak nowej linii.;
  pA = strA; //point pA at string A, copy the address of strA[0] into our variable pA, also pA = &A[0] */
  puts(pA); //show what pA is pointing to
  
  pB = strB; //point pB at string B
  putchar('\n');
  
  while(*pA != '\0'){
    *pB++ = *pA++;
  }
  
  *pB = '\0';
  puts(strB);
  return 0;
}

