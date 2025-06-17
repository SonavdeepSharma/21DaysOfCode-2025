#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100];
    int freq1[101] = {0}; 
    int freq2[101] = {0}; 

    printf("Note: Please enter numbers between 0 and 100 only.\n");

  
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(int i = 0; i < n1; i++) {
        int x;
        scanf("%d", &x);
        freq1[x]++;
    }


    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(int i = 0; i < n2; i++) {
        int x;
        scanf("%d", &x);
        freq2[x]++;
    }

    
    if(n1 != n2) {
        printf("false\n");
        return 0;
    }

    
    for(int i = 0; i <= 100; i++) {
        if(freq1[i] != freq2[i]) {
            printf("false\n");
            return 0;
        }
    }

    printf("true\n");
    return 0;
}
