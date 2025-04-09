#include <stdio.h>
#define CODE "#include <stdio.h>%c#define CODE %c%s%c%c%c// Inception%cint run() {%c  printf(CODE, 10, 34, CODE, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c%c  return (0);%c}%c%cint main() {%c  // Print source code inside stdout%c  return (run());%c}%c"

// Inception
int run() {
  printf(CODE, 10, 34, CODE, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);

  return (0);
}

int main() {
  // Print source code inside stdout
  return (run());
}
