cat /etc/passwd | sed '/^#/d' | sed '2n;N;s/.*\n//' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | cut -d ':' -f7 | tr '\n' ',' | sed 's/.$/./' | sed 's/,/, /g' | tr -d '\n'
