# Bases de la Programmation en C. Thème 3.

Ce dépôt correspond au 3e thème de BPC, semaines 5 et 6, dont le sujet est à https://www.fil.univ-lille.fr/~ballabriga/bpc/tdtp/tp_theme3.html

## Legrand Théophane groupe 3

## Exercice sur les tableaux 

Exercice fait en TD et mis en place sur PC :

### Exo 1

- exo1.c

### Exo 2

- exo2.c

### Exo 3

- exo3.c 

Exercice a faire en TP

### Exo 4

On retrouve le code dans leurs fichiers respéctifs :

- fatal 
- readl

### Exo 5

- Voir le code dans exo5 et mcu_wl.c et mcu_wc.c
- Deux fichiers executables mcu_wl et mcu_wc qui se trouve dans mcu/build

Les commandes pour compiler sont dans le fichier MakeFile (exo5.mak).
Commande
```bash
    make -f exo5.Mak
```
```bash
    echo 'Hello Unix World!' | ./../buildmcu_wc
    echo 'Hello\nUnix\nWorld!' | ./../buildmcu_wl
```

### Exo 6:

- Voir le code dans exo6 et mcu-rev
- Fichier executable mcu_rev qui se trouve dans mcu/build

Les commandes pour compiler sont dans le fichier Makefile (exo6.mak).
Commande 
```bash
    make -f exo6.mak
```
```bash
    echo "Hello World," > essai 
    echo "Hello Unix World!" >> essai
    ./../buildmcu_rev < essai
```

### Exo 7

- Voir code exo7 (fonction copie)


