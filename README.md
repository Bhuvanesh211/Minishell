# Mini Shell (msh)

A simple shell program (`msh`) implemented in C that mimics the behavior of the BASH shell. This project is built using Linux Kernel system calls and IPC mechanisms.

## Features
1. **Prompt Customization**:
   - Default prompt: `msh >`
   - Can be customized using the `PS1` environment variable (e.g., `PS1=NEW_PROMPT`).
   - Prevents spaces between `=` (e.g., `PS1 = NEW_PROMPT` is treated as a normal command).

2. **Command Execution**:
   - Executes both internal and external commands.
   - Creates a child process for external commands, waits for its completion before displaying the prompt again.

3. **Special Variables**:
   - `echo $?`: Prints the exit status of the last executed command.
   - `echo $$`: Prints the PID of the `msh` process.
   - `echo $SHELL`: Prints the executable path of the `msh` program.

4. **Signal Handling**:
   - `Ctrl+C`: Sends `SIGINT` to the foreground program. If no program is running, it redisplays the prompt.
   - `Ctrl+Z`: Sends `SIGTSTP` to the foreground program and displays its PID.

5. **Built-in Commands**:
   - `exit`: Terminates the `msh` program.
   - `cd`: Changes the working directory.
   - `pwd`: Displays the current working directory.

## Requirements
- Linux OS
- GCC compiler

## How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/msh.git
   cd msh
