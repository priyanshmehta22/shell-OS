n=1
row=6
for((i=1; i<=row; i++))
do
  for((j=1; j<=i; j++))
  do
    echo -n "$n "
    n=$((n + 1))
  done
  n=1
  echo
done
