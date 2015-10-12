text=[]
a=input()
while (a):
	text.append(a)
	a=input()

strings=[]
for b in reversed(text):
	for i in range(len(b)):

		if len(strings)>i:
			strings[i]+=b[i]
			
		else:
			strings.append(b[i])
		if i==0:
			maxlength=len(b[0])
print (strings)