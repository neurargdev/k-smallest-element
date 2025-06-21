/**
 * @author  @neurargdev (www.neurarg.com.ar)
 **/

#include <stdlib.h>
#include <stdio.h>
#include "k_nth_element.h"

#define MAX_LENGTH 10
#define N_TESTCASES 11

struct testcase {
    int a[MAX_LENGTH];
    int length;
    int k;
    int result;
};

int main(void) {
    struct testcase tests[N_TESTCASES] = {
        { {8}, 1, 0, 8 },
        { {8, 4}, 2, 1, 8 },
        { {8, 4, 5}, 3, 0, 4 },
        { {8, 4, 5}, 3, 1, 5 },
        { {8, 4, 5}, 3, 2, 8 },
        { {8, 4, 3, 9}, 4, 1, 4 },
        { {8, -2, 9, 0, 13}, 5, 2, 8 },
        { {8, -2, 9, 0, 13, 33}, 6, 4, 13 },
        { {8, -2, 9, 0, 13, 33, 66}, 7, 3, 9 },
        { {8, -2, 9, 0, 13, 33, 36, 39}, 8, 1, 0 },
        { {8, -2, 6, 0, 3, 11, 21, 1, 2}, 9, 3, 2 }
    };    
    int result;

    printf("\n TESTING k_nth \n");
    for (unsigned int i = 0; i < N_TESTCASES; i++) {
        printf("Test case %i: ", i+1);
        result = k_nth_element(tests[i].a, tests[i].length, tests[i].k);
        if (result == tests[i].result) {
            printf("OK \n");
        } else printf("FAILED \n");
    }    

    return EXIT_SUCCESS;
}
