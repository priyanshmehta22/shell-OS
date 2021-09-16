# pyramid star pattern
echo “name: PRIYANSH MEHTA”
echo “ reg no: 20BCE2292”
Read p
for((m=1; m<=p; m++))
do
 for((a=m; a<=p; a++)) #to print spaces
 do
 echo -ne " ";
 done
 for((n=1; n<=m; n++)) #this loop will print left side of the pyramid
 do
 echo -ne "#";
 done
 for((i=1; i<m; i++)) #this loop will print right side of the pyramid
 do
 echo -ne "#";
 done
 echo;
done
