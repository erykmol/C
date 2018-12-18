#include <stdio.h>

int max(int arr[], int lenght);

int main()
{
    int array[] = {1,4,60,8,90,2,4,150,1,4,5,100};
    int lenght = sizeof(array)/sizeof(int);
    printf("Max: %d\n", max(array, lenght));
    return 0;
}

int max(int arr[], int lenght){
    int max_arg = arr[0];
    for (int i=0; i < lenght; i++){
        if (arr[i] > max_arg){
            max_arg = arr[i];
        }
    }
    return max_arg;
}