for a in 1 2 3 4 5
do
    j=1
    while [ $j -le $a ]
    do
        echo -n "* "
        j=`expr $j + 1`
    done
    echo ""
done
