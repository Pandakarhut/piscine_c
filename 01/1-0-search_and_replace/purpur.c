#include <unistd.h>

int main(int argc, char **argv)
{
  if (argc == 4 && !argv[2][1] && !argv[3][1])
  {
      while (*argv[1])
      { 
        if (*argv[1] == *argv[2])
          *argv[1] = *argv[3];
        write(1, argv[1]++, 1);
      }
  }
  write(1, "\n", 1);
  return (0);
}


// if correct amoutn of arguments:
// if also argument 2 and 3 are just one character:
// Go through every character of argv[1]
// For each character, check if the current character is argv[2] character
// If current=argv[2], then replace argv[1] with argv[3]
// Loop until end of string
// print newline. 
