#finding the frequency of characters in the string 
string=input("Enter the word:")
letter=input("Enter the letter:")
a=0
for i in range(len(string)):
    if string[i]==letter:
        a+=1
print(a)