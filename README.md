# k-smallest-element
C - Data Structures and Algorithms - k-nth element

**k-nth element of array.**
 I wrote an algorithm that, given an array a: Array[0...N] of int and
 a natural number k <=n (n<=N), return the element of a that would be
 in cell a[k] if "a" were sorted.
 Swapping "a" is allowed, but not completely sorting it. 
 The idea is to exploit the fack that quick sort's partition procedure
 leaves the pivot in it's correct place.

> [!TIP]
> - Run
> -     gcc -Wall -Wextra -Wno-newline-eof -Werror -pedantic -std=c99 -c main.c k_nth_element.c
> -     gcc -Wall -Wextra -Wno-newline-eof -Werror -pedantic -std=c99 -o main main.o k_nth_element.o
> -     ./main
