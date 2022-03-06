#using the concept of strings-find inbuilt function(but works only for python extensions)
a = str(input("Enter the file name: "))
b = a.find(".py")
print(b)
if b == ".py":
    print("The extension used is python")
else:
    print("invalid input")