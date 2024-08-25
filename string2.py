dictionary = ["cat","bat","rat"]
sentence = "the cattle was rattled by the battery"
sen = sentence.split(' ')
k = 0
m = 0
length = len(dictionary[0])
for i in sen:
    for j in i:
        if j == dictionary[k][m]:
            m += 1
            if m == length:
                
                k += 1
                m = 0
