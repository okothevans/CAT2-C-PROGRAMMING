/*
EVANS OKOTH OKUMU
CT102/G/23443/24
*/


#include <stdio.h>

int main() {
	int i,j;
    
    int scores[2][2][2] = {{ {65, 92}, {84, 72} },  { {35, 70}, {59, 67} } };

    
    printf("Matrix 1\n");
    for ( i = 0; i < 2; i++) {  
        for ( j = 0; j < 2; j++) {  
            printf("%d\t", scores[A][i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i = 0; i < 2; i++) {  
        for ( j = 0; j < 2; j++) {  
            printf("%d\t", scores[B][i][j]);
        }
        printf("\n");
    }

    return 0;
}
