/*1.Print the following pattern

Input Format

Integer

Constraints

Input>0

Output Format

Star pattern

Sample Input 0

4
Sample Output 0

*
**
***
****

sollution: */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Loop to print the pattern
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {

                printf("*");
            }
            printf("\n"); // Move to the next line after printing stars
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

/*2.Write a progam to display the following pattern.

Input Format

Integer

Constraints

input>0

Output Format

Star Pattern

Sample Input 0

4
Sample Output 0

****
****
****
**** 

sollution: */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Loop to print the pattern
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                printf("*");
            }
            printf("\n"); // Move to the next line after printing stars
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

/*3.Print the following pattern

Input Format

Integer

Constraints

input>0

Output Format

Star pattern

Sample Input 0

5
Sample Output 0

10101
01010
10101
01010
10101 

Sample Input 1
6
Sample Output 1
101010
010101
101010
010101
101010
010101

sollution: */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Loop to print the pattern
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Check if the sum of the indices is even or odd
                if ((i + j) % 2 == 0) {
                    printf("1");
                } else {
                    printf("0");
                }
            }
            printf("\n"); // Move to the next line after printing each row
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

/*4.Print the following pattern
Input Format

Integer

Constraints

input>0

Output Format

Star pattern

Sample Input 0

5
Sample Output 0

    *****
   *****
  *****
 *****
*****

sollution: */
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Loop to print the pattern
        for (int i = 0; i < n; i++) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                printf(" ");
            }
            // Print stars
            for (int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n"); // Move to the next line after printing each row
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

/*5.Write a program to display the following pattern

Input Format

Integer

Constraints

input>0

Output Format

Star Pattern

Sample Input 0

5
Sample Output 0

1
24
135
2468
13579 

sollution: */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Loop to print the pattern
        for (int i = 1; i <= n; i++) {
            // For odd indexed rows, print odd numbers
            if (i % 2 != 0) {
                for (int j = 1; j <= i; j++) {
                    printf("%d", j * 2 - 1); // Odd numbers: 1, 3, 5, ...
                }
            } else { // For even indexed rows, print even numbers
                for (int j = 1; j <= i; j++) {
                    printf("%d", j * 2); // Even numbers: 2, 4, 6, ...
                }
            }
            printf("\n"); // Move to the next line after printing each row
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

/*6.Write a program to display the following pattern

Input Format

Integer

Constraints

input>0

Output Format

Star pattern

Sample Input 0

5
Sample Output 0

*****
*   *
*   *
*   *
*****

sollution: */
#include <stdio.h>

int main() {
    int n;

    // Read the input integer
//    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Print the first row
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line

        // Print the middle rows
        for (int i = 1; i < n - 1; i++) {
            printf("*"); // Print the first star
            for (int j = 1; j < n - 1; j++) {
                printf(" "); // Print spaces
            }
            printf("*\n"); // Print the last star and move to the next line
        }

        // Print the last row only if n > 1
        if (n > 1) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n"); // Move to the next line
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

/*8.Write a program to display the following pattern.

Input Format

Integer

Constraints

input>0

Output Format

Star pattern

Sample Input 0

4
Sample Output 0

*******
 *****
  ***
   *
   
   sollution: */
   #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Loop for each row
        for (int i = 0; i < n; i++) {
            // Print leading spaces
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            // Print stars
            for (int j = 0; j < (2 * (n - i) - 1); j++) {
                printf("*");
            }
            printf("\n"); // Move to the next line after printing each row
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

/*9.Write a program to display the following pattern

Input Format

Integer

Constraints

input>0

Output Format

Star pattern

Sample Input 0

4
Sample Output 0

   *
  ***
 *****
*******

sollution: */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Loop for each row
        for (int i = 0; i < n; i++) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                printf(" ");
            }
            // Print stars
            for (int j = 0; j < 2 * i + 1; j++) {
                printf("*");
            }
            printf("\n"); // Move to the next line after printing each row
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

/*10.Write a program to display the following pattern

Input Format

Integer

Constraints

Input>0

Output Format

Star pattern

Sample Input 0

4
Sample Output 0

*     *
 *   * 
  * *  
   *   
  * *  
 *   * 
*     * 

sollution: */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the input is greater than 0
    if (n > 0) {
        // Upper half of the pattern
        for (int i = 0; i < n; i++) {
            // Print leading spaces
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            // Print stars
            printf("*");
            if (i < n - 1) { // Avoid printing extra space and star on the last row of the upper half
                for (int j = 0; j < 2 * (n - i - 1) - 1; j++) {
                    printf(" ");
                }
                printf("*");
            }
            printf("\n"); // Move to the next line after printing each row
        }

        // Lower half of the pattern
        for (int i = n - 2; i >= 0; i--) {
            // Print leading spaces
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            // Print stars
            printf("*");
            if (i < n - 1) { // Avoid printing extra space and star on the last row of the lower half
                for (int j = 0; j < 2 * (n - i - 1) - 1; j++) {
                    printf(" ");
                }
                printf("*");
            }
            printf("\n"); // Move to the next line after printing each row
        }
    } else {
        printf("Input must be greater than 0\n");
    }

    return 0;
}

