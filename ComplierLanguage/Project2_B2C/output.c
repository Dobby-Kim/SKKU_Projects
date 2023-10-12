/*-- B2C ANTLR visitor --*/
/* [Redifination Error]  Line 20: Redifining x(type: bool) to int, ONLY the SAME type of redifinations are allowed */
 /*[Incompatible Type Error] Line 22:s+i : s(double) != i(int) */
/*[Return Type Error] Line 30: In int main() Function > return value : x ( type : bool ) imcompatible ! */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#define string std::string
;
;
int
main ()
{
  int global;
  int i;
  int last;
  double s;
  bool x;
  last = 100;
  global = 1;
  s = 0.0;
  i = last;
  x = true;
  last =
    fun2 (last, s,
	  last) /* ---> [Incompatible Call site Type] Line 17: fun2 */ ;
  x =
    fun2 (last, s,
	  x)
    /* ---> [Incompatible Call site Type] Line 18: fun2 *//* ---> [Incompatible Return Type] 18 : x (bool) != fun2(int) */
    ;
  x = 1;
  while (x == true)
    {
      s =
	s + i /* ---> [Incompatible Type Error] s+i : s(double) != i(int) */ ;
      i = i + 1;
      x = i < last;
    }
  printf ("sum(%d) = %f\n", last, s);
  return (x);
}

double
fun1 (int a, double b, bool c)
{
  double i;
  int s;
  string x;
  ;
  a = 1;
  b = 0.1;
  c = true;
  s = 100;
  i = 1.1;
  x = "jiseon";
  return (b);
}

int
fun2 (int x, int y, bool z)
{
  double i;
  int s;
  ;
  x = 1;
  y = x;
  z = true;
  s = 100;
  i = 1.1;
  return (s);
}
