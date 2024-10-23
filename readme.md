# Buffer Overflow Exploit

Basic project to demonstrate a process injection to buffer over overflow. In a secure testing and development environment, involving a vulnerable program.

## Project Structure

- `src/vulnerable.c`: The vulnerable program that contains a buffer overflow vulnerability.
- `src/exploit.c`: The program to exploit the vulnerability (optional).
- `src/injector.c`: A shell process injector, this inject shell code into the vulnerable program.
- `docs/exploit_flow.md`: A document explaining the technical flow of the exploit.

## Setup Instructions

1. Ensure you have a C compiler (such as MINGW GCC) installed.
2. Clone this repository or download the project files.
3. Navigate to the project directory and run the following command to compile all files:
   
    ````bash
        make all
    ````
The compiled binaries will be placed in the build/ directory.

4. Use this command to clear the compiled files:
    
    ````
        make clen
    ````

## Running the Exploit

1. **Start the Vulnerable Program**:
   First of all, start the vulnerable program that contains the buffer overflow vulnerability:

    ```bash
        ./build/vulnerable
    ```

2. **Run the Injector:** In a split or separeted terminal, run the injector to inject the shellcode into the vulnerable program:
   
    ```bash
        ./build/injector
    ```
3. **Observe the Result:** Once the injector successfully injects the shellcode, the payload (shellcode) will execute within the vulnerable process, spawning a shell.

## Technical Requirements

- A Windows machine or environment (if using MinGW for compilation).
- GCC or another C compiler.

## Disclaimer

This project is for educational purposes only. The buffer overflow exploit and injector are meant to demonstrate how vulnerabilities can be exploited in a controlled environment. Please do not use this code in unauthorized environments.