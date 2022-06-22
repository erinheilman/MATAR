#include <stdio.h>
#include "matar.h"
 
int main() {

    int thread_id;
    
    #pragma omp parallel
    {
        thread_id = omp_get_thread_num();
        printf("Hello World... from thread = %d\n", thread_id);
    }
    
}