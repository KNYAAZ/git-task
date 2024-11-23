double my_pow(double base, int exponent) {
    if (exponent == 0) return 1.0;
    bool isNegative = exponent < 0;
    if (isNegative) {
        exponent = -exponent;
    }
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return isNegative ? 1.0 / result : result;
}
