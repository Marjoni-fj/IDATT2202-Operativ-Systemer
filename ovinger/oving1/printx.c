#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char str[100];
  int count = (argc > 1) ? atoi(argv[1]) : 1;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  for (int i = 0; i < count; i++)
  {
    printf("%s", str);
  }

  return 0;
}