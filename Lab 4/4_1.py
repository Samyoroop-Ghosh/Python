import string
str = input("Enter a sentence : ")

wordCount = {}

words = str.split()

for word in words:
    #removes the trailing full stops from the sentence enders
    cleaned_word = word.strip(string.punctuation)
    if cleaned_word:
        if cleaned_word in wordCount:
            wordCount[cleaned_word] += 1
        else:
            wordCount[cleaned_word] = 1 
    
    
print(f"Length : {len(str)} \nPosition of 'country' : {str.find('country')}")

for word in wordCount:
    print(f"{word} \t {wordCount[word]} times")

