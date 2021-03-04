#include <stdio.h>


extern const double PI; //w kompilacji do cpp program nie rozpoznaje odiesienia do PI
extern const double E; //w kompilacji do cpp program nie rozpoznaje odiesienia do E


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
