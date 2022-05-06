// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  struct Cage {
    bool light; // состояние лампочки
    Cage *next;
    Cage *prev;
  };
  int countOp; // счетчик шагов (число переходов из вагона в вагон)
  Cage *first; // точка входа в поезд (первый вагон)
 Train::Cage* create(bool _light);
 Cage *first;
 Cage *last;
 int count = 0;
 public:
  Train();
  void addCage(bool light); // добавить вагон с начальным состоянием лампочки
  int getLength();          // вычислить длину поезда
  int getOpCount();         // вернуть число переходов (из вагона в вагон)
 Train() : first(nullptr), last(nullptr) { }
 void addCage(bool _light);
 int getLength();
 int getCount();
 ~Train();
 
};
#endif  // INCLUDE_TRAIN_H_
