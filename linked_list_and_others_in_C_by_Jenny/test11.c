// Multiplication of two matrix
#include<stdio.h>
#define N 50
int main(){
    int a[N][N], b[N][N], c[N][N], m, n, p, q;
    int i, j, k, sum;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);

    printf("\nEnter element of first array: ");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);
    
    printf("\nEnter element of second array: ");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nFirst matrix is->\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matrix is->\n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // multiply
    if(n != p){
        printf("\nWe cannot multiply");
    }
    else{
        for(i = 0; i < m; i++){
            for(j = 0; j < q; j++){
                sum = 0;
                for(k = 0; k < m; k++){
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
        printf("\nMultiplication matrix is of \"%d\" rows and \"%d\" columns and matrix is->\n", m, q);
        for(i = 0; i < m; i++){
            for(j = 0; j < q; j++){
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}