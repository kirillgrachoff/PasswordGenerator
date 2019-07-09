#PasswordGenerator<br>
###Use case: (run)<br>
`$ <path to executable>/password <siteName>` <br>
output:<br>
`<your password for this Web Page>`
##Requirements for use
You need a file "password.txt" in directory, where executable is placed.<br>
password.txt's format:<br>
1. `<your secret word>`<br>
2. `<your secret number>`<br>
3. `<your special symbols>` (optional)

##Requirements for build
`make` and `g++ compiler`<br>
or `cmake` and brain (:D)

##Build
`$ make password`