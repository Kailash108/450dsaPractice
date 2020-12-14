# Link: https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/
from math import floor

size1 = int(input("Enter the size of the array1: "))
size2 = int(input("Enter the size of the array2: "))

arr1 = []
arr2 = []
finalArr = []

print("Enter the elements into the array1")
for i in range(0, size1):
    ele = int(input())
    arr1.append(ele)
    finalArr.append(ele)    
print("Enter the elements into the array2")
for i in range(0, size2):
    ele = int(input())
    arr2.append(ele)
    finalArr.append(ele)

finalArr.sort()

if(len(finalArr)%2 != 0):
    oddAns = floor(len(finalArr)/2)
    print("Median is:", finalArr[oddAns]) 
else:
    middle1 = floor(len(finalArr)/2)-1
    middle2 = middle1+1
    evenAns = round((finalArr[middle1]+finalArr[middle2])/2)
    print("Median is:", evenAns)
