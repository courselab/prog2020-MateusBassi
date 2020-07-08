/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{
  int t,x,y,d,f,g;
 t = *a;
 x = *b;
 y = *c;

  if (*a>=*b && *b>=*c)
  {
    *a=y;
    *b=x;
    *c=t;
  }
  if (*a>=*b && *c>=*b)
  {
    *a=x;
    *b=y;
    *c=t;
  }
  if (*b>=*a && *a>=*c)
  {
    *a=y;
    *b=t;
    *c=x;
  }
  if (*b>=*a && *c>=*a)
  {
    *a= t;
    *b= y;
    *c= x;
  }
  if (*c>=*a && *a>=*b)
  {
    *a=x;
    *b=t;
    *c=y;
  }
  if (*c>=*a && *b>=*a)
  {
  *a=t;
  *b=x;
  *c=y;
  }

  d=*a;
  f=*b;
  g=*c;

  *a=g;
  *b=f;
  *c=d;
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
