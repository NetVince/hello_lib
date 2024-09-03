# hello_lib
Petite lib maison, qui permet simplement d'afficher un hello world avec sa version
Cette lib va servir d'exemple pour conan_practice. Elle servira de lib développée en locale.
## Prérequis

Avant de pouvoir construire ce projet, assurez-vous d'avoir les outils suivants installés sur votre machine :

- [CMake](https://cmake.org/) 
- [Conan](https://conan.io/)
  Installez Conan avec "pip" :

   ```bash
   pip install conan
   ```
- Un compilateur C++ (par exemple, GCC, Clang, MSVC)

## Installation

1. Clonez ce dépôt sur votre machine locale :

   ```bash
   git clone https://github.com/NetVince/hello_lib.git
   cd conan-practice
   ```


## Compilation

Pour compiler le projet, utilisez simplement `conan` à partir du répertoire de construction :

```bash
conan create .
```

Cette commande va builder la lib et l'ajouter automatiquement au cache Conan
> **⚠️ Attention :** Le build type semble obligatoire. J'ai eu des problèmes sans cette option. A voir

Vous pouvez vérifier la présence de la lib dans le cache :
```bash
conan list hello
```

## Conanfile.py

Ressources : https://docs.conan.io/2/tutorial.html
Il existe beaucoup d'options pour le fichier conanfile.py
Pour l'instant le fichier est très succinct.
A l'avenir, il faut l'enrichir pour permettre :
    - de faire appel à CMake directement depuis Conan pour build le projet
    - de définir les chemins de build en fonction du type de release par exemple

## CMakeLists.txt

Ce fichier est classique, il permet de dire quelles sont les versions des libs externes à utiliser pour compiler.
A l'avenir, il faudrait peut-être créer un script permettant de changer facilement les versions des libs dans ce fichier
pour faciliter le travail des devs pour éviter qu'il modifie manuellement le fichier à chaque changement de version.