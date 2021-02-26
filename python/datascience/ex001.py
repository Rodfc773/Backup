word1 = input('')
word2 = input('')

word1 = word1.lower()
word2 = word2.lower()

letters1 = list()
letters2 = list()
for letter in word1:
    if letter != ' ' and letter != '.' and letter != '!' and letter != '?' and letter != ',':
        letters1.append(letter)
for letter in word2:
    if letter != ' ' and letter != '.' and letter != '!' and letter != '?' and letter != ',':
        letters2.append(letter)

letters1.sort()
letters2.sort()
count = 0
number_of_iguality = 0
if len(letters1) == len(letters2):
    while count < len(letters1):
        if letters1[count] == letters2[count]:
            number_of_iguality += 1
        count += 1
#print(letters1)
#print(letters2)
if number_of_iguality == len(letters1):
    print(True)
else:
    print(False)
