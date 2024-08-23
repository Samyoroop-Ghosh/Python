str = input("Enter a comma seperated sequence of words : ")
 
words = str.split(",")
words.sort()


output = ",".join(words)
print(output)