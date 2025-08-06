#include <stdio.h>
#include <string.h>
struct Sdistance {
    float inch;
    float feet;
};

struct Sdistance read_distance(char name[]) {
    struct Sdistance d;
    printf("Enter information for %s distance:\n", name);
    printf("Enter feet: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &d.feet);
    printf("Enter inch: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &d.inch);
    return d;
}

struct Sdistance add_distance(struct Sdistance f, struct Sdistance s) {
    struct Sdistance t;
    t.inch = f.inch + s.inch;
    t.feet = f.feet + s.feet;
    if (t.inch >= 12.0) {
        t.inch -= 12.0;
        t.feet += 1;
    }
    return t;
}

void print_distance(struct Sdistance t) {
    printf("\nSum of distances = %.0f\'-%.1f\"\n", t.feet, t.inch);
}

int main() {
	struct Sdistance d1,d2,sum;
    d1 = read_distance("1st");
    d2 = read_distance("2nd");
    sum = add_distance(d1, d2);
    print_distance(sum);
    return 0;
}
