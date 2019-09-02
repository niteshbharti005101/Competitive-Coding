mystr = "ambuj"
lol = "jumba"

for i in range(len(mystr)):        
    if mystr[i] not in lol or len(mystr) != len(lol):
        print("No")
        break
    else:
        continue
else:
    print("Yes")

