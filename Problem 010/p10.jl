sum = 0

for i = 1:2000000
  if isprime(i)
    sum += i
  end
end

sum
