#include <stdio.h>
#include <stdlib.h>
int bc(char s[], int lno, int lb, int ub, int exp) {
if (exp < lb || exp > ub) {
fprintf(stderr, "subscript (%d) out of bounds for array %s[%d:%d] on line %d\n", exp, s, lb, ub, lno);
exit(1);
} else {
return exp;
}}
main() 
{
int 
x_i
=8888;
for(
x_i
=
8
;
x_i
>=
1
;
x_i
--)
{
if(
x_i
==
6
)
{
printf(
"%d\n", 
996
);
}
else if(
x_i
==
5
)
{
printf(
"%d\n", 
995
);
}
else if(
x_i
==
4
)
{
printf(
"%d\n", 
994
);
}
else if(
x_i
==
7
)
{
printf(
"%d\n", 
997
);
}
else
{
printf(
"%d\n", 
x_i
+
800
);
}
}
for(
x_i
=
8
;
x_i
>=
1
;
x_i
--)
{
if(
x_i
==
6
)
{
printf(
"%d\n", 
796
);
}
else
{
if(
x_i
==
5
)
{
printf(
"%d\n", 
795
);
}
else
{
if(
x_i
==
4
)
{
printf(
"%d\n", 
794
);
}
else
{
if(
x_i
==
7
)
{
printf(
"%d\n", 
797
);
}
else
{
printf(
"%d\n", 
x_i
+
600
);
}
}
}
}
}
for(
x_i
=
8
;
x_i
>=
1
;
x_i
--)
{
if(
x_i
==
6
)
{
printf(
"%d\n", 
596
);
}
else if(
x_i
==
5
)
{
printf(
"%d\n", 
595
);
}
else
{
if(
x_i
==
4
)
{
printf(
"%d\n", 
594
);
}
else if(
x_i
==
7
)
{
printf(
"%d\n", 
597
);
}
else
{
printf(
"%d\n", 
x_i
+
400
);
}
}
}
}
