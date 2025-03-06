# Atelier-Test-Driven-Development

Atelier Tutor 42 Lyon

# TP - Exercices TDD en C

Ce document présente trois exercices à réaliser en TDD (Test Driven Development) en langage C, en utilisant une bibliothèque de tests unitaires Unity. Chaque exercice est détaillé ci-dessous avec sa description, son niveau de difficulté et des exemples pour guider votre développement.

![image tdd](https://www.zealousys.com/wp-content/uploads/2023/09/Steps-to-Implementing-Test-Driven-Development.png)

[Lien Unity](https://github.com/ThrowTheSwitch/Unity)

---

## Exercice 1 : Thermomètre

**Niveau : Facile**

Premier exercice pour commencer

**Objectif :**  
Développer un programme qui retourne la température la plus proche de 0.

### Règles

- Si aucune température n'est fournie, retourner 0.
- La liste des températures fournie doit contenir au maximum 10 000 valeurs.
- Si deux températures sont à égale distance de zéro (par exemple, 5 et -5), retourner la température positive.

### Exemples

- **Entrée :** 2, 9, 1  
  **Sortie :** 1

- **Entrée :** 2, 9, -1  
  **Sortie :** -1

- **Entrée :** (aucune température)  
  **Sortie :** 0

- **Entrée :** 2, 9, -2, -3  
  **Sortie :** 2

---

## Exercice 2 : Chiffres Romains

**Niveau : Moyen**

### Description

Les Romains utilisaient un système de numération basé sur des lettres : I, V, X, L, C, D, M. Bien que les Romains n’aient jamais découvert le chiffre zéro, leur système reste utilisé de nos jours pour certaines applications (par exemple, pour dater des événements culturels).

### Partie I : Conversion d’un entier en chiffre romain

**Objectif :**  
Écrire une fonction qui convertit un entier en son équivalent en chiffres romains.

**Exemples :**

1 --> I 
7 --> VII
10 --> X
49 --> XLIX
847 --> DCCCXLVII
1053 --> MLIII
1776 --> MDCCLXXVI
2018 --> MMXVIII

*Remarque :* Il n'est pas nécessaire de gérer des nombres supérieurs à environ 3000.

### Partie II : Conversion d’un chiffre romain en entier

**Objectif :**  
Écrire une fonction qui convertit une chaîne représentant un chiffre romain en un entier.

---

## Exercice 3 : Diamant

**Niveau : Moyen**

### Énoncé

Étant donné une lettre majuscule, afficher un diamant commençant par 'A', s'élargissant jusqu'à la lettre donnée, puis se rétrécissant pour revenir à 'A'.

### Exemples

- **Pour la lettre `E` :**

```
    A
   B B
  C   C
 D     D
E       E
 D     D
  C   C
   B B
    A
```
- **Pour la lettre `C` :**

```
  A
 B B
C   C
 B B
  A
```
---

Amusez-vous bien !
