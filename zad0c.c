#include <stdio.h>


void zeSpacja(){
	int przedzialy, poziom, znak, iloscSpacji;

	printf("podaj ilosc przedzialow: ");
	scanf("%d",&przedzialy);
	printf("podales: %d \n", przedzialy);
	int i;
	for (i = 0; i < przedzialy; i++){
		for (poziom = 0; poziom < i+2; poziom++){
			for (znak = 0; znak < przedzialy+poziom+1; znak++){
				iloscSpacji = (przedzialy*2+1) - (poziom*2+1);
				if (znak < iloscSpacji/2) {
					putchar(' ');
				} else {
					putchar('*');
				}
			}
			printf("\n");
		}
	}
}


void bezSpacji(){
	int przedzialy, poziom, znak;

	printf("podaj ilosc przedzialow: ");
	scanf("%d",&przedzialy);
	printf("podales: %d \n", przedzialy);
	int i;
	for (i = 0; i < przedzialy; i++){
//		printf("iteracja :%d", i);
		for (poziom = 0; poziom < i+2; poziom++){
			for (znak = 0; znak < poziom*2+1; znak++){
				putchar('*');
			}
			printf("\n");
		}
	}
}


int main(){
	bezSpacji();
}



