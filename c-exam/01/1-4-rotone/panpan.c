#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int rot_1(char c)
{
  if ((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'y'))
    c += 1;
  else if ((c == 'z') || (c == 'Z'))
    c -= 25;
  return (c);
}

int main(int ac, char **av)
{
  if (ac == 2)
    while (*av[1])
      ft_putchar(rot_1(*av[1]++));
    ft_putchar('\n');
  return (0);
}
