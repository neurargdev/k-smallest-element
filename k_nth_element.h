#ifndef _k_NTH_ELEMENT_H_
#define _k_NTH_ELEMENT_H_

/**
 * @author  @neurargdev (www.neurarg.com.ar)
 *
 * @brief k-nth element of array.
 * I wrote an algorithm that, given an array a: Array[0...N] of int and
 * a natural number k <=n (n<=N), return the element of a that would be
 * in cell a[k] if "a" were sorted.
 * Swapping "a" is allowed, but not completely sorting it. 
 * The idea is to exploit the fack that quick sort's partition procedure
 * leaves the pivot in it's correct place.
 *
 * @param a Arreglo.
 * @param length Length to array. 
 * @param k Position within the array if it were sorted.
**/

int k_nth_element (int a[], unsigned int length, unsigned int k);

#endif