def solve(limit):
	print sum([x for x in range(limit) if x % 3 == 0 or x % 5 == 0])

def main():
	solve(1000)

if __name__ == "__main__":
	main()
