ll sieve[1000009];

void eros()
{
	// 0 means prime;
	// 1 means non prime;
	sieve[0] = 1;
	sieve[1] = 0;
	sieve[2] = 0;
	for(int i = 2 ; i*i < 1000009 ; i++)
		if(sieve[i] == 0)
			for(int j = i*2 ; j < 1000009 ; j+=i)
					sieve[j] = 1;
}
