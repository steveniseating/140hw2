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
x_a[36]
={4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, };
printf(
"%d\n", 
x_a[(-1)*-33+
bc("a", 3, -33, 2,
0
-
17
)
]
);
}
