n=int(input("Enter the number of elements in each vector:"))

print("Enter the elements of the first vector:")
a = list(map(int, input().split()))

print("Enter the elements of the second vector:")
b = list(map(int, input().split()))

if len(a) != n or len(b) != n:
    print("Error: Invalid input", n, "elements should be there ")

else:   
    dot_prod=sum(a[i]*b[i] for i in range(n)) 

    print("The dot product between two vectors is: ",dot_prod)