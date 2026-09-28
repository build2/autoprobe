#include <string.h>

size_t f ()
{
  char dst[8] = "strl";

#ifndef CONTROL
  size_t n = sizeof (dst);
  size_t r = strlcat (dst, "cat", n);
#else
  strcat (dst, "cat");
  size_t r = 7;
#endif

  return r;
}
