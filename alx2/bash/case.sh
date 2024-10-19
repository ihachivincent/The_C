#!/bin/bash

	case ${1,,} in 
	
	vincent | abukuse | ihachi)
	echo "Welcome back"
	
	;;

	help)
	echo "Type your name correctly please"

	;;

	*)
	echo "this is not your domain, the sysytem is goin to log you out"

	esac

