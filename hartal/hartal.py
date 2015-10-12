testcases=input();
for _ in range(testcases):
	days=input()
	num_parties=input()
	part_hartals=[input() for _ in range(num_parties)]
	hartals=0

	uselessdays=[x for x in range(6,3651,7) ]
	uselessdays+=[x for x in range(7,3651,7)]
	for day in range(1,days+1):
		if day in uselessdays:
			pass
		else:
			for i in part_hartals:
				if day%i==0:
					hartals+=1
					break
	print hartals