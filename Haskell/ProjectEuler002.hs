fib :: Int -> Int
fib 0 = 1
fib 1 = 2
fib n = fib (n-1) + fib (n-2)

fiblist :: Int -> Int -> [Int]
fiblist n limit
	| fib n <= limit = (fib n) : fiblist (n+1) limit
	| otherwise = []

solve :: Int -> Int
solve n = sum $ filter (\x -> even x) (fiblist 0 n)