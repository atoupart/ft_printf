if gcc *.c -w -I . libftprintf.a;
then
	echo "\033[32mBuild success\033[0m"
	rm /tmp/test_raw.txt /tmp/test_ft_printf.txt /tmp/test_printf.txt > /dev/null 2>&1
	./a.out > /tmp/test_raw.txt
	while read line
	do
		isEvenNo=$((counter % 2))
		if [ $isEvenNo -ne 0 ]
		then
			echo $line >> /tmp/test_printf.txt
		else
			echo $line >> /tmp/test_ft_printf.txt
		fi
		((counter ++))
	done < /tmp/test_raw.txt
	cat /tmp/test_raw.txt
	if [ "$1" == "diff" ]
	then
		echo "\033[31m---- DIFF: ----\033[0m"
		diff /tmp/test_ft_printf.txt /tmp/test_printf.txt
	fi
else
	echo "\033[31mBuild failed\033[0m"
fi
