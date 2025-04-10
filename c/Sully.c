#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CODE "#include <stdio.h>%2$c#include <stdlib.h>%2$c#include <string.h>%2$c#define CODE %3$c%1$s%3$c%2$c%2$cint main() {%2$c  int i = %4$d;%2$c  if (i <= 0) return (1);%2$c  char current_filename[256] = {0};%2$c  sprintf(current_filename, %3$cSully_%5$cd.c%3$c, i);%2$c  if (strcmp(current_filename, __FILE__) == 0) i--;%2$c  char new_exec[256] = {0};%2$c  sprintf(new_exec, %3$cSully_%5$cd%3$c, i);%2$c  char new_filename[256] = {0};%2$c  sprintf(new_filename, %3$cSully_%5$cd.c%3$c, i);%2$c  FILE *file = fopen(new_filename, %3$cw%3$c);%2$c  if (file == 0) return (1);%2$c  fprintf(file, CODE, CODE, 10, 34, i, 37);%2$c  fclose(file);%2$c  char command_compile[1024] = {0};%2$c  sprintf(command_compile, %3$ccc -Wall -Wextra -Werror %5$cs -o %5$cs%3$c, new_filename, new_exec);%2$c  system(command_compile);%2$c  char command_exec[512] = {0};%2$c  sprintf(command_exec, %3$c./%5$cs%3$c, new_exec);%2$c  system(command_exec);%2$c%2$c  return (0);%2$c}%2$c"

int main() {
  int i = 5;
  if (i <= 0) return (1);
  char current_filename[256] = {0};
  sprintf(current_filename, "Sully_%d.c", i);
  if (strcmp(current_filename, __FILE__) == 0) i--;
  char new_exec[256] = {0};
  sprintf(new_exec, "Sully_%d", i);
  char new_filename[256] = {0};
  sprintf(new_filename, "Sully_%d.c", i);
  FILE *file = fopen(new_filename, "w");
  if (file == 0) return (1);
  fprintf(file, CODE, CODE, 10, 34, i, 37);
  fclose(file);
  char command_compile[1024] = {0};
  sprintf(command_compile, "cc -Wall -Wextra -Werror %s -o %s", new_filename, new_exec);
  system(command_compile);
  char command_exec[512] = {0};
  sprintf(command_exec, "./%s", new_exec);
  system(command_exec);

  return (0);
}
