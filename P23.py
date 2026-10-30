import random
cse7=[]
for i in range(20):
    n=random.randint(1,100)
    cse7.append(n)
print(cse7)
print("min:",min(cse7))
print("max:",max(cse7))
print("average:",sum(cse7)//len(cse7))
ec=0
for i in cse7:
    if i%2==0:
        ec=ec+1
print("even numbers are:",ec)    