/**
 * @author  @neurargdev (www.neurarg.com.ar)
 **/
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "k_nth_element.h"

bool goes_before(int x, int y) {
    return x <= y;
}

void swap(int a[], unsigned int i, unsigned int j) {
    int tmp;
    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

unsigned int partition(int a[], unsigned int init, unsigned int length) {
    unsigned int i,j, ppiv;
    ppiv = init;
    i = init + 1;
    j = length;

    while (i <= j) {
        if (goes_before(a[i], a[ppiv])) i++;
        else if (goes_before(a[ppiv], a[j])) j--;
        else swap(a, i, j);
    }

    swap(a, ppiv, j);
    ppiv = j;
    
    return ppiv;
}

int k_nth_element (int a[], unsigned int length, unsigned int k) {
    unsigned ppiv, lft, rgt;

    lft = 0;
    rgt = length - 1;
    ppiv = partition(a, lft, rgt);

    if(k >= length) {
        printf("k must be < length to array");
        return EXIT_FAILURE;
    } 

    while (ppiv != k) {
        if (ppiv < k) {
            lft = ppiv + 1;
        } else rgt = ppiv - 1;
        ppiv = partition(a, lft, rgt);
    }
    
    return a[k];
}


