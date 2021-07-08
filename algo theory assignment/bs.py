import fileinput

for line in fileinput.input():
	pass							

arr = []

def bs(mylist , low, high, to_be_search):
	if(high>=low):
		mid = (high+low)/2
		if(arr[mid]==to_be_search):
			return mid
		elif (arr[mid]>to_be_search):
			t = bs(mylist, low, mid-1,to_be_search)
		else:
			t = bs(mylist, mid+1, high,to_be_search)

		return t
		
size = input()

for i in range(0,size):
	kk = input()
	arr.append(kk)

arr.sort()

to_be_search = input()

index = bs(arr[:], 0, size-1, to_be_search)
print index+1
