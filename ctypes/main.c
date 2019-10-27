#include <stdio.h>

int main(void) {
  printf("char: %lu\n"
         "short"
         ": %lu\n int"
         ": %lu\n long"
         ": %lu\n longlong"
         ": %lu\n ",
         sizeof(char), sizeof(short), sizeof(int), sizeof(long),
         sizeof(long long));

  printf("float: %lu\n"
         "double"
         ": %lu\n long double"
         ": %lu\n ",
               sizeof(float),
           sizeof(double), sizeof(long double));

  return 0;
}