echo "Enter a number"
read num
fact=1
for((i=2;i<=num;i++))
{
  fact=$((fact * i))
}

echo "factorial of $num is $fact"
