#include <iostream>

#include <string.h>

#ifndef HAVE_STRLCPY
#  include "strlcpy.h"
#endif

#ifndef HAVE_STRLCAT
#  include "strlcat.h"
#endif

int main ()
{
  using namespace std;

  char buf[7] = "strl";

  strlcat (buf, "cat", sizeof (buf));
  cout << "strlcat: " << buf << endl;

  strlcpy (buf, "strlcpy", sizeof (buf));
  cout << "strlcpy: " << buf << endl;
}
