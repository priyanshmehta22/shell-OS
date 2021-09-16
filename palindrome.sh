Read num
s=0 # Storing the remainder
rev="" #reverse string of the number
temp=$num
while [ $num -gt 0 ]
do
 s=$(( $num % 10 ))
 num=$(( $num / 10 ))
 rev=$( echo ${rev}${s} )
done
echo “name: PRIYANSH MEHTA”
echo “ reg no: 20BCE2292”

if [ $temp -eq $rev ];
then
 echo "Number is palindrome"
else
 echo "Number is NOT palindrome"
fi
