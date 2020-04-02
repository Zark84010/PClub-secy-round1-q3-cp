# Gotta Catch 'em all
## Problem Statement
You are Ash, a young pokémon trainer. You have recently encountered upon a new location which offers a huge amount of exotic pokémons, and you do not want to miss this golden opportunity to catch them. You decide to take the help of Professor Oak, a well known pokémon researcher. Each of your and Prof. Oak's pokémon has its own power, which is a positive integer between **1** and **m** (both inclusive). You have **n** pokémons in your current team, where the **i***th* pokémon has power **A_i**.

Prof. Oak gives you **q** instructions. Each instruction is of 2 types, either an instruction to change, or to fight. If the instruction is to change, then Prof. Oak gives you 2 positive integers, **i** and **p**, and you replace your **i***th* pokémon by a new pokémon having power **p**.  If the instruction is to fight, Prof. Oak again gives you 2 positive integers **l** and **r**, and you have to fight with your team which consists of the lth pokémon till the rth pokémon (both inclusive). Your team power is given by the **LCM** of all the powers of pokémons in your team. In each fight, Prof. Oak allows you to have an extra pokémon, and you can choose a pokémon with any power between **1** and **m** (both inclusive).

Since Ash is not good at maths, he needs your help to find the power of the extra pokémon which maximises his team power for each fight instruction.

## Input
The first line of input consists of 3 positive integers `n`, `m` and `q`, where **n** is the total number of pokémons Ash has, **m** is the maximum power of each pokémon, and **q** is the number of instructions. The next line consists of **n** space separated positive integers **A_1, A_2, ... A_n**. Then each of the next **q** lines of inupt is either of the form `c i p` (change instruction) or `f l r` (fight instruction).

## Output
For each fight instruction, output the power of the pokémon which maximizes the team power for that instruction in a new line. If there are multiple numbers which maximize the team power, output the smallest among them.

## Constraints


## Sample test cases
