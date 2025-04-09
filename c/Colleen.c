#include <stdio.h>
#define CODE "#include <stdio.h>%c#define CODE %c%s%c%c%cint run() {%c  printf(CODE, 10, 34, CODE, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c%c  return (0);%c}%c%cint main() {%c  return (run());%c}%c"

int run() {
  printf(CODE, 10, 34, CODE, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);

  return (0);
}

int main() {
  return (run());
}
