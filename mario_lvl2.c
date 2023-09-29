#include <stdio.h>
#include <cs50.h>

int main(void){
    int n = 1;
    int m = get_int("Positive Number (Height): ");
    int i, j, k, z;
    for(i=0;i<m;i++){
        if(n<m){
            z = m-n;
            for(k=0;k<z;k++){
                printf(" ");
            }
        }

        for(j=0;j<n;j++){
            printf("#");
        }
        printf("  ");
        for(j=0;j<n;j++){
            printf("#");
        }
        printf("\n");
        n++;
    }
}