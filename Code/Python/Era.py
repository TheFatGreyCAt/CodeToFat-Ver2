p=int(input())
def Era(n):
    b=[0,0]
    for i in range(2,n+1):
        b.append(1)
    for i in range(2,n+1):
        if b[i]==1:    
            j=2
            while i*j<=n:
                b[i*j]=0
                j+=1
    return b
print(Era(p))