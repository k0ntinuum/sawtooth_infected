unt bit_signal(unt x) {
	unt b = bit_count(x);
	if (b < 16) return 0;
	if (b > 16) return 1;
	return 2;
}
unt _enc(unt k, unt b) {
	unt c;
	for (int i = 0 ; i < A; i++) {
		c = arc4random();
		if (bit_signal(c^k) == b) { return c;}
	}
	printf("\nfailure to encode\n");
	return 0;
}

unt enc(unt k, unt* p, unt* c) {
	for (size_t i = 0; i < P; i++) {c[i] = _enc(k, p[i]);  k ^= c[i];}
	return k;
}

unt dec(unt k, unt* c, unt* d) {
	for (size_t i = 0; i < P; i++) { d[i] = bit_signal(c[i]^k); k^=c[i];}
	return k;
}



