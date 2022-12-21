echo "Enter the filename"
read fname 
echo "Enter the start line number"
read s 
echo "Enter the ending line number"
read n
sed -n $s,$n\p $fname | cat > new.txt
cat new.txt

