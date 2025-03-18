N = 10^8

a = 3
x = fill(0.1, N)
y = fill(7.1, N)

d = a*x + y

test1 = all(x -> x == 7.4, d)
println("Test 1: $test1")

result = 3*0.1 + 7.1
test2 = all(x -> x == 3*0.1+7.1, d)
println("Test 2: $test2")