def F(n):
    if n == 0: return 0
    elif n == 1: return 1
    else: return F(n-1)+F(n-2)


k=input()


for i  in range(1,int(k)+1):
    p=F(i)
    print(p)
