
void demo() {
    
    unt k, f, g, p[P], c[P], d[P];
    hide_cursor();
    cls();
    k = arc4random();f = k; g= k;
    for (size_t z = 0; z < 10000; z++) {
        srand(time(NULL));
        if (z % 100 == 0 ) {k = arc4random();f = k; g= k;}
        rgb(0, arc4random_uniform(50) + 206, 0);
        cursor_to(10,0);
        printf("      S A W T O O T H\n\n");
        for (size_t i = 0 ; i < P; i++) p[i] = arc4random_uniform(2);
        printf("  k = ");print_bits(k);printf("\n");
        f = enc(f, p, c);
        g = dec(g, c, d);
        
        printf("  f = ");print_bits(f);printf("\n");
        //printf("  g = ");print_bits(g);printf("\n");
        printf("\n  p = ");
        for (size_t i = 0 ; i < P; i++) print_bit(p[i]);
        printf("\n");
        printf("\n  c =\n");
        for (size_t i = 0 ; i < P; i++) {printf("      ");print_bits(c[i]);printf("\n");}
        printf("\n  d = ");
        for (size_t i = 0 ; i < P; i++) print_bit(d[i]);
        printf("\n");
        for (size_t i = 0 ; i < P; i++) if (p[i] != d[i]) {cursor_to(1,1); printf("failure to decode");}
        usleep(200000);

    }

}
