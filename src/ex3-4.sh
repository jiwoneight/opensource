#!/bin/bash

read -p "리눅스가 재미있나요? (yes / no) " answer

case "$answer" in
	[Yy] | [Yy][Ee][Ss])
		echo "리눅스가 재미있군요!"
		;;
	[Nn] | [Nn][Oo])
		echo "리눅스가 별로인가 보군요."
		;;
	*)
		echo "yes or no로 입력해 주세요."
		;;
esac
