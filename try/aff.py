import sys
sys.stdout = open('aff.txt','w')
text = input()
x = 0
val = 0
de = ''
for a in range(20):
    for b in range(26):
        for i in text:
            x = ord(i) - 97
            val = (int(a + 1)*x + int(b)) % 26
            de += chr(val + 97)
        print("1KEY {} 2KEY {} | {}\n".format(a + 1, b, de))
        de = ''