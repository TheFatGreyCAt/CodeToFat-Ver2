n=int(input())
a=[1,1]
res=False
for i in range(2,n+1):
    if a[i-1]+a[i-2] > n:
        break
    a.append(a[i-1]+a[i-2])
for i in range(len(a)):
    if a[i]==n:
        res=True
        print(f"vi tri :{i+1}")
# print(res)
if res==False:
    print("-1")