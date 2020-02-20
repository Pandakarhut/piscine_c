#include <unistd.h>

int main(int argc, char **argv)
{
  int index;
  int i;
  
  index = -1;
  i = 0;
  if (argc == 2)
  {
    while (argv[1][i])
    {
      if (argv[1][i] != ' ' && argv[1][i] != '\t')
      {
        if (i == 0 || argv[1][i -1] == ' ' || argv[1][i] != '\t')
          index = i;
      }
      i++;
    }
    while (index > -1 && argv[1][index])
      write(1, &(argv[1][index++]), 1);
  }
  write(1, "\n", 1);
  return (0);
}
