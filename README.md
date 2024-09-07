# Jogo da Velha / Tic-tac-toe

Tic-tac-toe for terminal developed using

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

---
### Installation
1. [Linux](#)
2. [Windows](#-1)
---

### ![Linux](https://img.shields.io/badge/Linux-000?style=for-the-badge&logo=linux&logoColor=FCC624)


1. ***Create the directory***
```sh
mkdir ~/jogo_da_velha && cd ~/jogo_da_velha
```

---
2. ***Download the Source Code***
> curl

     
```sh
curl -LO https://raw.githubusercontent.com/LucasGPM97/Atividade_Jogo_da_Velha_C/main/Jogo_da_Velha_Linux.c
```
---
3. ***Compile the Code***

> [!IMPORTANT]
> Choose which alias you want to use to run the game: `jogo_da_velha` or `tic_tac_toe` .

``` sh
gcc -o jogo_da_velha Jogo_da_Velha_Linux.c
```
OR
``` sh
gcc -o tic_tac_toe Jogo_da_Velha_Linux.c
```

------
> [!NOTE]
> Add the following to your shell configuration file (~/.bashrc, ~/.zshrc, ...):

```sh
export PATH="$PATH:~/jogo_da_velha
```
-------------------
4. ***Run the game***

You can now run the game from Shell by typing: 

```sh
jogo_da_velha
```
OR

```sh
tic_tac_toe
```
---
### ![Windows](https://img.shields.io/badge/Windows-000?style=for-the-badge&logo=windows&logoColor=2CA5E0)
> Powershell


1. ***Create a Directory***

```Powershell
New-Item -Path C:\jogo_da_velha -ItemType Directory && Set-Location -Path C:\jogo_da_velha
```
---
2. ***Download the Source Code***

```Powershell
Invoke-WebRequest -Uri https://raw.githubusercontent.com/LucasGPM97/Atividade_Jogo_da_Velha_C/main/Jogo_da_Velha_Linux.c -OutFile Jogo_da_Velha_Linux.c
```

---
3. ***Compile the Code***

You will need a C compiler like [MinGW](https://www.mingw-w64.org/)

> [!IMPORTANT]
> Choose which alias you want to use to run the game: `jogo_da_velha` or `tic_tac_toe` .

``` sh
gcc -o jogo_da_velha Jogo_da_Velha_Linux.c
```
OR
``` sh
gcc -o tic_tac_toe Jogo_da_Velha_Linux.c
```

---
4. Run the game
   
Now you just need to double click on `tic_tac_toe.exe` or `jogo_da_velha.exe`
