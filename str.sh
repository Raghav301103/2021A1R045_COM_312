echo "enter a string: "
read str
len= expr "$str" : '.*'
echo "len of string $len"
