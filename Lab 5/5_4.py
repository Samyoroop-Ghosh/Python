str = input("Enter a sequence of lines : ")

#splitting into distinct words
str1 = str.split()

#considering an empty string p 
p = ""

#storing only distinct elements in p
for word in str1 :
    if word not in p :
        p = p+" "+word

#splitting and sorting p   
q = p.split()
q.sort()

#joining all the words of p
output = (" ").join(q)


print(output)