#include <unistd.h>

int main(int argc, char **argv)
{
  int characters[256] = {};
  int i;
  int j;
  i = 0;
  j = 0;

  while (argc == 3 && argv[1][i])
  {
    while (argv[2][j])
    {
      if (argv[1][i] == argv[2][j] && characters[(int)argv[1][i]] != 1)
      {
        write(1, &(argv[1][i]), 1);
        characters[(int)argv[1][i]] = 1;
      }
      j++;
    }
    j = 0;
    i++;
  }
  write(1, "\n", 1);
  return (0);
}
