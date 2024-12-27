
void print_bit(unt b) { b == 0 ? printf("O") : printf("|"); }
void print_bit_space(unt b) { b == 0 ? printf("O ") : printf("| "); }
void print_bits(unt x) {
    for (int i = 0; i < L ; i++ ) print_bit( (x & ( 1 << i) ) >> i);
    //printf("\n");
}
void print_bits_l(unt x, unt l) {
    for (int i = 0; i < l ; i++ ) print_bit( (x & ( 1 << i) ) >> i);
}
void print_bits_nl(unt x) {
    for (int i = 0; i < L ; i++ ) print_bit( (x & ( 1 << i) ) >> i);
    printf("\n");
}
void print_sym_bits(unt x) {
    for (int i = 0; i < L ; i++ ) print_bit( (x & ( 1 << i) ) >> i);
    printf("\n");
}
