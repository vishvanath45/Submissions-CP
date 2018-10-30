# 114 A CF

import math

a = int(raw_input())
b = int(raw_input())

c = math.log10(b)/math.log10(a)

print ("hello")
print c

if(c == math.ceil(c)):
	print("YES")
	print int(c-1)
else:
	print("NO")




