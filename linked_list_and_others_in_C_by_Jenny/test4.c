// Arrays and Pointers
#include<stdio.h>

int main(){
    int b = 10;
    int *ptr = &b;
    // ptr = b;         //ERROR
    printf("b: %d\n", b);
    printf("ptr: %d\n", *ptr);
    printf("&b: %p\n", &b);
    printf("ptr: %p\n", ptr);

// Array name itself acts as a pointer
// Array name always contains the base address of array
    int a[] = {2, 1, 3, 4};
    int *ptr2;
    ptr2 = a;        //CORRECT
    printf("ptr2: %p\n", ptr2);
    printf("a: %p\n", a);
    ptr2++;
    printf("increased ptr2: %p\n", ptr2);
    int* ptr3 = &a[1];  //CORRECT
    printf("ptr3: %p\n", ptr3);
    ptr3--;
    printf("decreased ptr3: %p\n", ptr3);
    printf("&ptr3: %p\n", &ptr3);

    // You cannot change the base address of array
    // a++;             //ERROR

    // int *ptr4 = a[2];   //ERROR
    
    printf("a[2]: %d\n", a[2]);
    printf("a[2]: %d\n", 2[a]);
    printf("a[2]: %d\n", *(a + 2));
    printf("a[2]: %d\n", *(ptr3 + 2));
    printf("*a: %d\n", *a);
    printf("*a: %d\n", *ptr3);
    printf("a + 1: %p\n", a + 1);
    printf("&a: %p\n", &a);
    printf("a: %p\n", a);
    printf("&a + 1: %p\n", &a + 1);


    printf("%d\n", *(a));
    printf("%p\n", (a));
    printf("%d\n", *(a + 1));
    printf("%p\n", (a + 1));
    printf("%d\n", *(a + 2));
    printf("%p\n", (a + 2));
    printf("%d\n", *(a + 3));
    printf("%p\n", (a + 3));
    printf("%d\n", *(a + 4));
    printf("%p\n", (a + 4));

    printf("&a[0] + 1: %p\n", &a[0] + 1);
    printf("*(a + 1): %d\n", *(a + 1));
    printf("*a + 1: %d\n", *a + 1);

    int arr[5], i;
    int *q = arr;
    for(i = 0; i < 5; i++){
        // scanf("%d", &arr[i]);
        // scanf("%d", (arr + i));
        // scanf("%d", (arr + i));
        // scanf("%d", (i + arr));
        // scanf("%d", (q + i));
        scanf("%d", &q[i]);
    }
    for(i = 0; i < 5; i++){
        // printf("%d ", arr[i]);
        // printf("%d ", i[arr]);
        printf("%d ", i[q]);
    }
    return 0;
}

// address increment and decrement are allowed but address +, -, /, * address is not allowed
// if ptr = 100 them ptr++ will be 104 because of int data type contain 4 byte of memory
// in case of array arr is same as &arr (both contain base address) but in case of pointer ptr is not equal to &ptr
// a[i] = *(a + i) = *(i + a) = i[a]
// if q is pointer then a[i] = *(q + i) = *(i + q) = i[q]