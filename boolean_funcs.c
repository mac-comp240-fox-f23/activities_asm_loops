
// returns 1 if x > y
int gt (long x, long y)
{
  return x > y;
}


// returns 1 if x is equal to zero
int zero(long x) {
    return x == 0L;   // what does the L do?
}

// TODO: Create variations on the functions above that try out other relational operators
// and other integer data types

int comp2(long a) {
    int x = (a < 20) ? 100 : 0;
    return x;

}

int compb(unsigned int a, unsigned int b) {
    return (a < b) ? a : b;
}