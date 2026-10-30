a = [1,2,3,4,5,6,7,8,9,10]
e = {i: i for i in a if i % 2 == 0}
print(e)
s = {i: i*i for i in a}
print(s)
n = 7
m = {i: i*n for i in a}
print(m)