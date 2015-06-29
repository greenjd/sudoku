/**
 * HistoryElement Class definition.
 * This class holds a History on the board and an element associated with it.
 * 
 * @file HistoryElement.h
 * @author Bram Bonne
 */


#ifndef HISTORYELEMENT_H
#define HISTORYELEMENT_H

class HistoryElement {
public:
    HistoryElement(int x, int y, int type, int number) : m_x(x), m_y(y), m_type(type), m_number(number) { }
    int GetX(void) { return m_x; }
    int GetY(void) { return m_y; }
    int GetType(void) { return m_type; }
    int GetNumber(void) { return m_number; }
    static const int ENABLE_CHOICE = 1;
    static const int DISABLE_CHOICE = 2;
    static const int SET_FINAL_CHOICE = 3;
    static const int UNSET_FINAL_CHOICE = 1;

private:
    int m_x;
    int m_y;
    int m_type;
    int m_number;
};

#endif
