

def fun1(y):
    if y > 0:
        print(y)
        fun1(y-1)
def fun2(y):
    if y>0:
        fun2(y-1)
        print(y)
        
x=input("enter a number ")
y=int(x)
print("Value in Descending Order")
fun1(y)
print("Value in Ascending Order")
fun2(y)