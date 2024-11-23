double my_pow(double base, unsigned int exponent) {
    double result = 1.0;
    for (unsigned int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
