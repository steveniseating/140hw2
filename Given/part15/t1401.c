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
x_a[10]
={4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, };
int 
x_b
=8888;
int 
x_e
=8888;
int 
x_c[3]
={4444, 4444, 4444, };
int 
x_xx
=
9
;
printf(
"%d\n", 
x_a[(-1)*1+
bc("a", 4, 1, 10,
x_xx
)
]
);
printf(
"%d\n", 
x_a[(-1)*1+
bc("a", 5, 1, 10,
18
)
]
);
}
