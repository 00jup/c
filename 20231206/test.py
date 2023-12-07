# class Hello:
#     def __init__(self, A, B):
#         self.A = A
#         self.B = B
    
# A = [1,2]
# example1 = Hello(*A)
# print(example1.A, example1.B)

# example2 = Hello(*list(map(int, input("2개 : ").split())))

# print(example2.A, example2.B)
###############################2#############################
# class Hello:
#     def __init__(self):
#         self.A = int(input("numberA"))
#         self.B = int(input("numberB"))

# A = Hello()

# print(A.A, A.B)


###
class Hello:
    def __init__(self, A, B):
        self.C = A
        self.D = B
    class function1:
        def __init__(self, A, B):
            self.C = A
            self.D = B
            result = self.C + self.D
            print(result)
    def function2(self):
        result = self.C + self.D
        print(result)
        return 10

# A = Hello() --> A B가 있으니까 입력해줘야 함.

A = Hello(4, 5)

#print(A.function2())

print(A.function1(2,3))