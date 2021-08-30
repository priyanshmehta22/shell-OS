program()
{
    echo "1 is $1"
    echo "2 is $2"
    a="goodbye"
}
a=hello
b=world
program $a $b
echo "a is $a"
echo "b is $b"
