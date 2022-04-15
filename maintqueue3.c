/************************************/
/* Program   : maintqueue3.c */
/* Deskripsi : driver main modul tqueue3 */
/* NIM/Nama  : 24060120120012/Adinda Destifany Zenniar*/
/* Tanggal   : 3 Oktober 2021*/
/***********************************/
#include <stdio.h>
#include "tqueue3.h"
#include "boolean.h"

int main(){
    //kamus main
    tqueue3 A;
    char c;

    //algoritma
    createQueue3(&A);
    printQueue3(A);
    printf("\n");
    if (isEmptyQueue3(A)){
        printf("Queue kosong\n");
    }
    else{
        printf("Queue tidak kosong\n");
    }
    if (isFullQueue3(A)){
        printf("Queue penuh\n");
    }
    else{
        printf("Queue tidak penuh\n");
    }
    enqueue3(&A,'d');
    if(isOneElement3(A)){
        printf("Queue memiliki satu elemen\n");
    }
    else {
        printf("elemen bukan terdiri atas satu elemen\n");
    }
    printf("indeks head A : %d\n", head3(A));
    printf("indeks tail A : %d\n", tail3(A));
    printf("info head A = %c\n", infoHead3(A));
    printf("info tail A = %c\n", infoTail3(A));
    enqueue3(&A,'i');
    enqueue3(&A,'n');
    enqueue3(&A,'d');
    enqueue3(&A,'a');
    printf("indeks head A : %d\n", head3(A));
    printf("size queue A = %d\n", sizeQueue3(A));
    viewQueue3(A);
    dequeue3(&A,&c);
    viewQueue3(A);
    printf("indeks head A : %d\n", head3(A));
    printf("indeks tail A : %d\n", tail3(A));
    enqueue3(&A,'d');
    viewQueue3(A);
    printf("indeks head A : %d\n", head3(A));
    printf("indeks tail A : %d\n", tail3(A));

    return 0;
}
