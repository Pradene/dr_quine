#include <stdio.h>
#include <stdlib.h>
#define CODE "#include <stdio.h>%c#include <stdlib.h>%c#define CODE %c%s%c%c%cint main() {%c  int i = %c;%c  if (i < 0) return (1);%c  char new_filename[256] = {0};%c  sprintf(new_filename, %cSully_%cc.c%c, (i - 1) + 48);%c  FILE *file = fopen(new_filename, %cw%c);%c  if (file == 0) return (1);%c  fprintf(file, CODE, 10, 10, 34, CODE, 34, 10, 10, 10, (i - 1) + 48, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 10, 10, 34, 37, 37, 34, 10, 10, 10, 10);%c  fclose(file);%c  char command[512] = {0};%c  sprintf(command, %ccc -Wall -Wextra -Werror %cs -o Sully_%cc%c, __FILE__, (i - 1) + 48);%c  system(command);%c  return (0);%c}%c"

int main() {
  int i = 5;
  if (i < 0) return (1);
  char new_filename[256] = {0};
  sprintf(new_filename, "Sully_%c.c", (i - 1) + 48);
  FILE *file = fopen(new_filename, "w");
  if (file == 0) return (1);
  fprintf(file, CODE, 10, 10, 34, CODE, 34, 10, 10, 10, (i - 1) + 48, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 10, 10, 34, 37, 37, 34, 10, 10, 10, 10);
  fclose(file);
  char command[512] = {0};
  sprintf(command, "cc -Wall -Wextra -Werror %s -o Sully_%c", __FILE__, (i - 1) + 48);
  system(command);
  return (0);
}
