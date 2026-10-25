Exercice 1 — Analyse de code C++ 

1. 
 Le résultat affiché est : ⁠15 20⁠  
 Explication : Dans la fonction ⁠main⁠, on a ⁠x = 10⁠ et ⁠y = 20⁠. Lors de l'appel de la fonction ⁠modifier(x, y)⁠, la variable ⁠x⁠ est modifiée par référence (⁠&a⁠) et devient ⁠15⁠, mais ⁠y⁠ reste inchangée à ⁠20⁠ parce que le paramètre ⁠b⁠ a été passé par valeur.  
2. 
 Passage par valeur : On envoie une copie de la variable à la fonction. Toute modification effectuée à l'intérieur de la fonction n'affecte pas la variable d'origine dans le programme principal.  
 Passage par référence : On travaille directement sur la variable d'origine grâce à son adresse mémoire. Toute modification effectuée dans la fonction se répercute directement sur la variable initiale.  
3. 
Pour que les deux variables soient modifiées, il faut ajouter l'opérateur ⁠&⁠ devant le paramètre ⁠b⁠ 
void modifier(int &a, int &b) {
    a += 5;
    b += 10;
4. 
 L'opérateur ⁠&⁠ (référence) permet de lier le paramètre à la variable originale en mémoire au lieu de créer une simple copie. Ainsi, toute modification apportée au paramètre modifie directement la valeur de la variable d'origine.


Exercice2
<img width="272" height="86" alt="ex2" src="https://github.com/user-attachments/assets/345730a4-768e-4f33-9e97-5db236fd799a" />
Exercice3
<img width="227" height="139" alt="ex3" src="https://github.com/user-attachments/assets/c0a9080c-518f-426a-9110-032f6c900ca1" />
6.
Il faut déclarer le destructeur virtual pour que lorsqu'on utilise des pointeurs c++ sache que s'il faut supprimer l'objet, il doit d'abord supprimer la classe fille puis la classe mère, afin d'éviter une fuite de mémoire.
