a = int(input())
if a<2:
    print("notPrime")
else:
    for i in range(2,int(a**0.5)+1):
        if(a%i==0):
            print("notPrime")
            break
    else:
        print("Prime")