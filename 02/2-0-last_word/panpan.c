#include <unistd.h>

int main(int ac, char **av)
{
  int index;
  int i;
  
  index = -1;
  i = 0;
  if (ac == 2)
  {
    while (av[1][i])
    {
      if (av[1][i] != ' ' && av[1][i] != '\t')
      {
        if (i == 0 || av[1][i - 1] == ' ' || av[1][i - 1] == '\t')
          index = i;
      }
      i++;
    }
    while (index > -1 && av[1][index])
      write(1, &(av[1][index++]), 1);
  }
  write(1, "\n", 1);
  return (0);
}
