def input_ar():
	a=[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]
	for w in range(4):
		for e in range(4):
			a[w][e]=int(input("Введите элемент массива = "))
	return(a)
	
def sort_ar(a):
	b=[]
	i=(int(input('введитe номер строки = '))-1)
	k=(int(input('введите номер столбца = '))-1)
	
	for f in range(4):
		a[f][k]=0

	for t in range(4):
		a[i][t]=0
	for j in range(4):
		for p in range(4):
			if a[j][p] != 0:
				y=a[j][p]
				b.append(y)
	c=[[0,0,0],[0,0,0],[0,0,0]]
	for v in range(3):
		for z in range(3):
			c[v][z]=b[v+z]
	return(c)

a=input_ar()
c=sort_ar(a)
print(c)