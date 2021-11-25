#include <stdio.h>

int main() {

    int A[9] = {1,3,5,7,9,2,4,6,8};
    int i = 0, j = 0;
    int temp = 0;
	int n = 9;
    for (i = 0; i < n - 1; i++)
    {
            for (j = 0; j < n- 1; j++)
            {
                if (A[j] < A[j + 1])
                {
                    temp = A[j];
                    A[j] = A[j + 1];
                	A[j + 1] = temp;
                }
            }
        }

    for( i = 0; i < n; i++ ) {
        printf("%d ", A[i]);
    }

return 0;
}