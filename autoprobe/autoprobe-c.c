#include <stdio.h>
#include <string.h>

#ifndef HAVE_STRLCPY
#  include "strlcpy.h"
#endif

int main (int argc, char* argv[])
{
  char buf[6] = "strl";

  strlcpy (buf, "strlcpy", sizeof (buf));
  printf ("%s\n", buf);

  return 0;
}
