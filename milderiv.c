#include <stdio.h>

#define M 1000000

int main() {
 double x = 2.0;
 double d = 0.0;
 for (int i = 1; i <= M; i++) {
   d += (2.0 * i * i - 4.0 * i + 4.0) / (2.0 * i * i * i * i);
 }
 printf("The millionth derivative of x^2 is: %f\n", d);
 return 0;
}
