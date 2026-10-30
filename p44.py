class A:
  def display_A(self):
    print("from class-A")
class B:
  def display_B(self):
    print("from class -B")
class C(A,B):
  def display_C(self):
    print("from class-C")    

s=C()
s.display_A()
s.display_B()
s.display_C()