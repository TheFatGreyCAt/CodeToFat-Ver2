n=int(input())
def solve(n):
    res=0
    while(n>0):
        res+=(n%10)**3
        n=n//10
    return res

def check(n):
    if n==solve(n):
        return True
    return False

for i in range(1,n+1):
    if check(i):
        print(i,end=' ')