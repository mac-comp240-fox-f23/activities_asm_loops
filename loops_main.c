
#include <stdio.h>


int sum_up(int n);
int slow_mult(int a, int b);

int main() {
    int val1 = 5;
    int val2 = 3;

    int res1 = sum_up(val2);
    int res2 = slow_mult(val1, val2);

    printf("sum_up: %d\n", res1);
    printf("slow_mult: %d\n", res2);
    
    return 0;

}


int sum_up(int n) {
    int i = 1;
    int total = 0;
    while (i <= n) {
        total += i;
        i++;
    }
    return total;
}


int slow_mult(int a, int b) {
    int ans = 0;
    while (a > 0) {
        ans += b;
        a--;
    }
    return ans;
}


// TODO: Add the function definitions from the by-hand part of the activity below here

// TODO: Add the nested_while function here

// TODO: Add the ??? function here