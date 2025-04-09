#include <stdio.h>
#define CODE "#include <stdio.h>%c#define CODE %c%s%c%c%cint main() {%c  printf(CODE, 10, 34, CODE, 34, 10, 10, 10, 10, 10, 10, 10);%c%c  return (0);%c}%c"

int main() {
  printf(CODE, 10, 34, CODE, 34, 10, 10, 10, 10, 10, 10, 10);

  return (0);
}
