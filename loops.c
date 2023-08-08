
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

