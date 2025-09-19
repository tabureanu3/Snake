##  SnakeGame

## Ce reprezintă proiectul?
Acest proiect implementează jocul **Snake**, unde jucătorul controlează un șarpe care se deplasează pe ecran, colectează mere și devine tot mai lung. Scopul jocului este să acumulezi cât mai multe puncte evitând atingerea cu pereții sau cu propriul corp.

## Regulile jocului Snake:
1. Șarpele se deplasează pe ecran într-o anumită direcție (sus, jos, stânga, dreapta)
2. Jucătorul controlează direcția șarpelui folosind tastele 
3. Atunci când șarpele mănâncă merele, lungimea lui crește și scorul jucătorului crește
4. Jocul se termină dacă:
 Șarpele se lovește de marginea ecranului.
 Șarpele se lovește de propriul corp.
5. Scopul este obținerea celui mai mare scor posibil

## Tipuri de date declarate:
Numere întregi (int) – pentru coordonate, dimensiunile tablei și lungimea șarpelui;

Structura Point – pentru a reprezenta poziții pe tablă (x, y);

Structura Apple – pentru obiectul măr, ce are doar poziția sa;

Structura Snake – pentru șarpe, care conține segmentele (Point[]) și lungimea curentă;

Structura Board – pentru tabla de joc (lățime și înălțime);

<<<<<<< Updated upstream
-Un array Point[100] pentru segmentele șarpelui și referințe constante (const Point& și const Apple&) pentru a trece obiectele fără a le copia.
=======
Enum-ul Direction – pentru direcțiile de mișcare (sus, jos, stânga, dreapta);

Array de tip Point – pentru segmentele șarpelui.
>>>>>>> Stashed changes
