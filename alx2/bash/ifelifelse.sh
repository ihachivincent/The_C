#!/bin/bash

 if [ ${1,,} = vincent ]; then 
	 echo "Welcome you are credentals are accepted"

 elif [ ${1,,} = help ]; then 
	echo "if you have forgotten your domain then kindly submit your details here"

else 
	echo "your domain isnt available in our system please submit your details correctly for your domain"

fi
