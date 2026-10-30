n=int(input())
sp=1
sd=0
while n!=0:
    d=n%10
    sd=sd+d
    sp=sp*d
    n=n//10
if sd==sp:
    print("spy number")
else:
    print("not a spy number")