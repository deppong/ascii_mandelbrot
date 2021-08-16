#include <stdio.h> /* -ascii mandel- */
#define p(a) a*/** br*ot   set* in c*/a
#define c(u)/* #*:-=$*     */putchar(u)
#define J "..*-=:;#$ "         /*-#;:*/
typedef f;float                 typedef
i;f main()                        {f h=
32;                              for(f 
x=-32;x<32                        ;x++)
{for(f y=-80;y<                 80;y++)
{i cR=(i)y/32;i cI=(i)     x/16;i x2=0,
y2=0;f k=0;while(p(x2)    +p(y2)<=4&&k<
h){i z=p(x2)-p(y2)+cR;y2  =2*x2*y2+ cI;
x2=z;k++;}k<h?c(*(J+(k%10))):c(0x20);}c
(10);}} /* made by Deppong 8-16-2021 */