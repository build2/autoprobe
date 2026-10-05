#include <iostream>

#include <string.h>

#ifndef HAVE_STRLCAT
#  include "strlcat.h"
#endif

int main ()
{
  using namespace std;

  char buf[6] = "strl";

  strlcat (buf, "cat", sizeof (buf));
  cout << buf << endl;
}
