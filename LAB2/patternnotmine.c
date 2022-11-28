#include <stdio.h>


int main() {
    int row = 2 , column = 5 ;

    for (int i = 1; i <= row ; i++){
        for (int j = 1; j <= column ; j++)
            printf(" * ");

        for (int j = 1; j >= column ; j++)
            printf(" $ ");

        printf("\n");
    }
    return 0;
}