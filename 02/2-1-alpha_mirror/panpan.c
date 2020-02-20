#include <unistd.h>

int   main(int ac, char **av)
{
  char print;

  if (ac == 2)
  {
    while (*av[1])
    {
      print = *av[1];
      if ( *av[1] >= 'a' && *av[1] <= 'z')
        print = 'a' + ('z' - *av[1]);
      else if ( *av[1] >= 'A' && *av[1] <= 'Z')
        print = 'A' + ('Z' - *av[1]);
      write(1, &print, 1);
      av[1]++;
    }
  }
  write(1, "\n", 1);
  return (0);
}
