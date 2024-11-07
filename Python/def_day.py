from datetime import datetime, timedelta

day = int(input())
month = int(input())
year = int(input())

date = datetime(year, month, day)
yesterday = date - timedelta(days=1)
tomorrow = date + timedelta(days=1)

print(yesterday.strftime("%d/%m/%Y"))
print(tomorrow.strftime("%d/%m/%Y"))