#include <iostream>
using namespace std;

int main() {
    // Complete the code.
    // Int ("%d"): 32 Bit integer
    // Long ("%ld"): 64 bit integer
    // Char ("%c"): Character type
    // Float ("%f"): 32 bit real value
    // Double ("%lf"): 64 bit real value

    //Variables
    int a;
    long b;
    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%.03f\n%.09lf", a, b, c, d, e);
    
    return 0;
}

