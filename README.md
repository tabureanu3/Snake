# Snake Game 

## Descriere

Acesta este un proiect simplu în C++ care implementează jocul Snake.
Scopul jocului este să controlezi șarpele, să mănânci mere și să eviți coliziunile cu pereții sau cu propriul corp.

## Cum compilezi pe Windows?

Asigură-te că ai instalat g++ (de exemplu din MinGW).

Deschide Command Prompt în folderul proiectului.

Rulează comanda: 

```cmd
build.cmd
```

, se va genera executabilul snake.exe.

### Solutii universale

Pentru orice sistem de operare poate fi utilizat programul `make` sau `cmake`.

**Construirea cu make:**

```bash
make
```

Va fi create directorii `bin` si `obj`, programul va fi in directorul `bin`.

**Construirea cu cmake:**

```bash
# Creează un director de asamblare
mkdir build
# Mergi în directorul de asamblare
cd build
# Generează fișierele de asamblare
cmake ..
# Asamblează proiectul
cmake --build .
```

## Cum rulezi?

După compilare, rulează: `snake.exe`.

## Structura proiectului


- `*.hpp` – fișiere header cu declarațiile structurilor și claselor.
- `*.cpp` – fișiere sursă cu implementarea metodelor.
- `build.cmd` – script pentru compilare manuală.
- `.gitignore` – ignoră fișierele obiect și executabilele.
- `README.md` – instrucțiuni de utilizare.
