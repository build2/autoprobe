#include <string.h>

size_t f (void)
{
  char dst[8];

#ifndef CONTROL
  size_t n = sizeof (dst);
  size_t r = strlcpy (dst, "strlcpy", n);
#else
  strcpy (dst, "strlcpy");
  size_t r = 7;
#endif

  return r;
}
