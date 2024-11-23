double my_pow(double base, unsigned int exponent) {
    if (exponent == 0) return 1.0;
    double result = 1.0;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}
