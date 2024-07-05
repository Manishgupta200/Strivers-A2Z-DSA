// Multiplication of square matrix
#include<stdio.h>
#define N 50

int main(){
    int a[N][N], b[N][N], c[N][N], m;
    int i, j, sum, k;
    printf("Enter square matrix order: ");
    scanf("%d", &m);
    
    printf("\nEnter data of first matrix: ");
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter data of second matrix: ");
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nFirst matrix->\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matrix->\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // multiplication
    printf("Multiplication of matrix->\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            sum = 0;
            for(k = 0; k < m; k++){
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}