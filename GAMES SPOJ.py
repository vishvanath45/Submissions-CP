#GAMES SPOJ 
import math
from fractions import gcd
t = input()

for i in range (0 ,t):
	p = input()
	p = math.fabs(p)
	q = p
	q = math.floor(q)
	q = p-q
	print q
	if(q!=0):
		q = gcd(1,q)
		print int(q)
	else:
		print 1





