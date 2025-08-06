#include <stdio.h>
#include <string.h>
struct Scomplex {
    float m_R;
    float m_I;
};

struct Scomplex read_complex(char name[]) {
    struct Scomplex c;
    printf("for %s complex number:\n", name);
    printf("Enter real and imaginary respectively: ");
    fflush(stdin);fflush(stdout);
    scanf("%f%f", &c.m_R,&c.m_I);
    return c;
}

struct Scomplex add_complex(struct Scomplex f, struct Scomplex s) {
    struct Scomplex c;
    c.m_R = f.m_R + s.m_R;
    c.m_I = f.m_I + s.m_I;
   return c;
}

void print_complex(struct Scomplex c) {
	printf("Sum = %.1f + %.1fi\n",c.m_R, c.m_I);;
}

int main() {
	struct Scomplex x,y,sum;
    x = read_complex("1st");
    y = read_complex("2nd");
    sum = add_complex(x,y);
    print_complex(sum);
    return 0;
}
