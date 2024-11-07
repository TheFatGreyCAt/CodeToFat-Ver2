def NumberOfDay(m,y):
    nd=31
    if(m==2):
        if (y%4==0 and y%100!=0) or (y%400==0):
            nd=29
        else:
            nd=28
    elif(m in [4, 6, 9, 11]):
        nd=30       
    return nd
    
def TheDayBefore(d,m,y):
    if(d==1):
        if(m==1):
            d=31
            m=12
            y-=1
        else:
            d=NumberOfDay(m-1,y)
            m-=1
    else:
        d-=1
    print(f"{d}/{m}/{y}")
    
def TheDayAfter(d,m,y):
    if(d==NumberOfDay(m,y)):
        if(m==12):
            y+=1
            d=1
            m=1
        else:
            m+=1
            d=1
    else:
        d+=1
    print(f"{d}/{m}/{y}")
        
d=int(input())
m= int(input())
y=int(input())

TheDayBefore(d,m,y)
TheDayAfter(d,m,y)