str="Welcome to Miet."
echo "Total characters in string: ${#str}"

echo "Extracting list of 10 characters of string" 
substr="${str:0:10}"
echo "$substr"

echo "Extracting from specific character onwards"
substr="${str:11}"
echo "$substr"  

echo "Extracting characters between given range"
substr="${str:11:6}"
echo "$substr"  

echo "Extracting characters by giving range in negative"
substr="${str:-1}"
echo "$substr"  
