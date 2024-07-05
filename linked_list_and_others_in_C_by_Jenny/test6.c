// Pointers and 2-D array
#include<stdio.h>

int main(){
    int a[3][3] = {6,2,5,0,1,3,4,9,8};
    int *p;
    // p = a;   //ERROR because return pointer to a 1-D array but p contain address of a int. variable only 
    // p = &a[0][0];
    p = a[0];
    // p = a[0][0] //ERROR because return is value but pointer contain address
    // printf("%p",p);
    // printf("%p",a);
    // printf("%p",&a[0][0]);
    // printf("%p", &a);
    // printf("%p", *a);
    printf("%p\n", a[0]);
    // printf("%p", a+1);
    // printf("%p", &a[1]);
    // printf("%p", *(a+1));
    // printf("%p", a[1]);
    // printf("%p", &a[1][0]);
    // printf("%p", *(a+1) + 2);
    // printf("%d", *(*(a+1) + 2));
    // printf("%d", a[1][2]);
    // printf("%d", *(a[1] + 2));
    // printf("%d", *(*a + 1));
    printf("%d\n", **a);
    // printf("%d", **p);  //ERROR
    // printf("%p", a[1] + 1);
    // printf("%d", *(a[1] + 1));
    printf("%d", **(&a[1] + 1));    //IMPORTANT

    return 0;
}

// value of a[i][j] = *(*(a + i) + j) = *(a[i] + j)   (also use p in place of a)

//  printf("%p", a[1] + 1); and printf("%p", &a[1] + 1); are not same

// Take example of 1-D array
// 'a' is going to give the the address of the first element of the array
// '&a' is going to give the base address of the complete array
// printf("%p", a); and printf("%p", &a); are same
// printf("%p", a + 1); and printf("%p", &a + 1); are not name

// example: int arr[] = {1,4,3};
// a = 200, &a = 200 but a + 1 = 200 + 4 = 204, &a + 1 = 200 + 3*4 = 212