ldapsearch -Q cn | grep -i 'cn: Z' | sort -f -r | sed 's/cn: //'
