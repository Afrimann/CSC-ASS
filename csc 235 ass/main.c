#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(){
    
    char number_string[100];
    int number_array[100];
    int count = 0;
    int trial;

    char self_describing = 'T';
    
    printf("Enter number: ");
    scanf("%s", number_string);
    trial = strlen(number_string);
   
    
    for (int j = 0; j < trial; j++) {
        number_array[j] = number_string[j] - '0';
    }
    
    for (int j = 0; j < trial; j++) {
        printf("There are %d  %ds in the number \n", number_array[j],j);
    }
    for (int m = 0; m< trial; m++) {
        for (int i = 0; i< trial; i++) {
            if (number_array[i] == m) count++;
        }
        if(count == number_array[m]){
            self_describing = 'T';
        }
        else{
            self_describing = 'F';
            printf("\n");
            printf("Not self-describing\n");
            break;
        }
        count = 0;
        if (self_describing != 'F'){
            printf("\n");
            printf("Self-describing\n");
            break;
        }
    }
    
}

