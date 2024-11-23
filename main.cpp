double my_pow(double base, int exponent) {
    if (exponent == 0) return 1.0;

    bool isNegative = exponent < 0;
    if (isNegative) {
        exponent = -exponent;
    }

    double result = 1.0;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }

    return isNegative ? 1.0 / result : result;
}
