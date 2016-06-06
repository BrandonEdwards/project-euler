numbers = readdlm("numbers")
sum = 0
for i = 1:length(numbers)
  sum = sum + numbers[i]
end

sum
