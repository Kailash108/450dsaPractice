# Link: https://practice.geeksforgeeks.org/problems/common-elements1132/1
# Single Line Input Is Not Possible In This Code
n1 = int(input("Enter the size of array-1: "))
n2 = int(input("Enter the size of array-2: "))
n3 = int(input("Enter the size of array-3: "))

A = [] 
B = [] 
C = []
comAB = []
finalList = []

print("Enter the values into array-1")
for a in range(0, n1):
    ele = int(input())
    A.append(ele)
print("Enter the values into array-2")
for b in range(0, n2):
    ele = int(input())
    B.append(ele)
print("Enter the values into array-3")
for c in range(0, n3):
    ele = int(input())
    C.append(ele)

for i in range(0, n1):
    for j in range(0, n2):
        if(A[i] == B[j]):
            comAB.append(A[i])
            break
for k in range(0, n3):
    for l in range(0, len(comAB)):
        if(C[k] == comAB[l]):
            finalList.append(C[k])

if(len(finalList) == 0):
    print("No Common Elements Found In 3 Lists: ")
else:
    print("The Common Elements In Three Lists Are: ", finalList)
