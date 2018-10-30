for  i in range(0, size):
	arr.append(input())

arr.sort()

diff = []

for i in range(0,size-1):
	diff.append(arr[i+1]-arr[i])

maxi =0 

for i in range(0, size-1):
	if (maxi<diff[i]):
		maxi = diff[i]

print 'ans '+ maxi