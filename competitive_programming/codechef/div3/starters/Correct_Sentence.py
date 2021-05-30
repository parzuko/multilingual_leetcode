# ord('a')      ord('N') -> 78 Z-> 90
#97
# ch(97)    97->109
# a

t = int(input())
while t != 0:
    k = input()
 
    words = (list(k.strip()))


    if words[1] == "0":
        words = words[3:]
    else:
        words = words[2:]

    cur = ''
    sentance = []
    for letter in words:
        if letter != ' ':
            cur += letter
        if letter == ' ':
            sentance.append(cur)
            cur = ''

    sentance.append(cur)

    possible = True
    lower_count = 0
    upper_count = 0
    for word in sentance:
        is_word_lower = True
        is_word_upper = True
        for letter in word:
            # same word disparity
            if ord(letter) in range(97, 110):
                if is_word_lower == False:
                    possible = False
                    break
                is_word_upper = False
                         
            
            elif ord(letter) in range(78, 91):
                if is_word_upper == False:
                    possible = False
                    break
                is_word_lower = False
            
            else:
                # print(word)
                possible = False
        
        if possible:
            lower_count += 1
            upper_count += 1
            continue
        break

    if possible and lower_count >= 1 and upper_count >= 1: 
        print("YES")
    else:
        print("NO")
    
    
    t -= 1