# PasswordGenerator<br>
#### Use case: (run)<br>
`$ <path to executable>/password <siteName>` <br>
output:<br>
`<your password for this Web Page>`
## Requirements for use (password.txt file)
You need a file "password.txt" in directory, **where executable is placed**(!).<br>
password.txt's format:<br>
1. `<your secret word>`(no spaces)<br>
2. `<your secret number>` (number mod 2 == 1)<br>
3. `<your special symbols>` (optional, no spaces)<br>
1. next lines may be not empty **if special_symbols_string is not empty**

example:
```
The_bestSecretWord##You~everSeen
7
^&{}[]?/\.#@

special symbols for gmail: #$[]
```

## Requirements for build
`make` and `g++ compiler`<br>
or `cmake` and brain (:D)

## Build
`$ make password`
