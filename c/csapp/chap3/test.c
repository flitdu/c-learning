long exchange(long *xp, long y){
	long x = *xp;
	*xp = y;
	return x;
}

int comp(long a, long b){
	return (a==b);
}


