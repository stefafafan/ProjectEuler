solve :: Int -> Int
solve x = sum $ filter (\y -> y `mod` 3 == 0 || y `mod` 5 == 0) [1..x-1]
