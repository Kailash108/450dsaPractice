# Link: https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers/0
tc = int(input("Enter the no. of testcases: "))
while tc:
    num = int(input("Enter the number: "))
    fact = 1
    for i in range(1, num+1):
        fact = fact * i
    print(fact)
    tc = tc - 1
