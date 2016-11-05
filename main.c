#include "libft.h"
#include <stdio.h>

/*int main(int argc, char **argv)
{
    argc = 0;

    size_t  s;
     s = 3;
    argv[1] = (char*)memset(argv[1], 'a', s);
    argv[2] = (char*)ft_memset(argv[2], 'a', s);
    printf("memset: %s \n- ft_memset: %s\n", argv[1], argv[2]);



}*/

int main () {
 
  int test[2];
 
  ft_memset(test, -1, sizeof(test));
  printf("%d %d\n", test[0], test[1]);
 
  return 0;
}