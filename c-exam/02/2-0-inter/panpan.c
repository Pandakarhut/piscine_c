#include <unistd.h>

int main(int ac, char **av)
{
  int characters[256] = {};
  int i;
  int j;
  i = 0;
  j = 0;

  while (ac == 3 && av[1][i])
  {
    while (av[2][j])
    {
      if (av[1][i] == av[2][j] && characters[(int)av[1][i]] != 1)
      {
        write(1, &(av[1][i]), 1);
        characters[(int)av[1][i]] = 1;
      }
      j++;
    }
    j = 0;
    i++;
  }
  write(1, "\n", 1);
  return (0);
}
