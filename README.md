# IF
Описание работы IF и ELSE.

Хочу также сказать что я молодой программист и могу ошибаться в своих доводах(то что тут вы прочитаете - это Теория).

У меня было несколько обьяснений работы IF-а. И я начну с более реальных(на мой взгляд) и эфективных до более фантастических (но более понятных мне).

# 1.
IF - это сочитание таких вещей: 1 адрес на исполняемый блок кода (возможно функции), Умножение (bool)term на адрес.

ELSE - это тот же IF но с использованием такой вещи: NOT (Обратное 1 --> 0  0 --> 1).


NOT - Важный оператор(для работы с bool), Возвращает 1 если 0 и если 0 то 1. "NOT term" равен "abs(term -1)" // но только если term(bool)<br>


пример IF:<br>

term = 1; // bool<br>
address=*Некий_aдрес_функции*;<br>
boo = address * term; // *Некий_aдрес_функции*<br>
boo(); // Исполнится.<br>


пример IF и ELSE:<br>

term = 1; // bool<br>
AddressIF=*некий ядресс функции для IF*;<br>
AddressELSE=*некий ядресс функции для ELSE*;<br>
IF = AddressIF * term; // *некий ядресс функции для IF*<br>
ELSE = AddressELSE * NOT term; // 0<br>
// нельзя так: "ELSE = NOT IF;". Потому что если IF = 0, то ELSE станет равен 1.<br>
IF(); // Исполнится.<br>
ELSE(); // Не исполнится.<br>


пример NOT:<br>
term = 1; // bool<br>
term = abs(term -1); // |1 - 1| = 0<br>
