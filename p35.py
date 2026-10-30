def average(n):
    return sum(n)/len(n)
num=list(map(int,input().split()))
print(num)
avg=average(num)
print("average value is",avg)