#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char str[100];
  int count = (argc > 1) ? atoi(argv[1]) : 1;
  printf("Enter a string: ");
  scanf("%99s", str);

  for (int i = 0; i < count; i++)
  {
    printf("%s\n", str);
  }

  return 0;
}