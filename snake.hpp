/**
 * @file Snake.hpp
 * @brief Reprezintă șarpele din joc.
 * @details Clasa Snake gestionează segmentele șarpelui, mișcarea acestuia, 
 * creșterea și oferă funcționalități pentru compararea șerpilor.
 *
 * Proiect: Snake Game  
 * Autor: Lavinia Tabureanu  
 * An: 2025
 */

#pragma once
#include <vector>
#include "Point.hpp"
#include "direction.hpp"

class Snake {
private:
/**
 * Segmentele șarpelui reprezentate ca o listă de puncte.
 * @return Vector de obiecte Point reprezentând segmentele șarpelui.
 */
    std::vector<Point> segments;

public:
/** Constructor implicit: creează un șarpe cu un singur segment la poziția (0,0). 
 * @return Obiectul Snake creat.
*/
    Snake();
    /** Constructor de copiere. 
     * @param other Șarpele de copiat.
     * @return Obiectul Snake creat.
    */
    Snake(const Snake& other);
    /** Operator de atribuire.
     * @param other Șarpele de atribuit.
     * @return Referința la obiectul curent.
     */
    Snake& operator=(const Snake& other);

    /** Mută șarpele într-o direcție. 
     * @param dir Direcția în care se mută șarpele.
    */
    void Move(Direction dir);

    /** Returnează capul. 
     * @return Punctul reprezentând capul șarpelui.
    */
    Point Head() const;

    /** Crește șarpele.
     * @return void
     */
    void Grow();

    /** Returnează lista segmentelor.
     * @return Vector de obiecte Point reprezentând segmentele șarpelui.
     */
    const std::vector<Point>& GetSegments() const;
    /**
     * Compară doi șerpi pentru egalitate.
     * @param other Șarpele cu care se compară.
     * @return true dacă sunt egali, false altfel.
     */
    bool operator==(const Snake& other) const;
    /**
     * Compară doi șerpi pentru inegalitate.
     * @param other Șarpele cu care se compară.
     * @return true dacă sunt diferiți, false altfel.
     */
    bool operator!=(const Snake& other) const;
};
