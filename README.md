# IF
Описание работы IF и ELSE.

Хочу также сказать что я молодой программист и могу ошибаться в своих доводах(то что тут вы прочитаете - это Теория).

У меня было несколько обьяснений работы IF-а. И я начну с более реальных(на мой взгляд) и эфективных до более фантастических (но более понятных мне).

# 1.
IF - это сочитание таких вещей: 1 адрес на исполняемый блок кода (возможно функции), Умножение (bool)term на адрес.

ELSE - это тот же IF но с использованием такой вещи: NOT (Обратное 1 --> 0  0 --> 1).


NOT - Важный оператор(для работы с bool), Возвращает 1 если 0 и если 0 то 1.<br>


пример IF в псевдо-коде:<br>

term = 1; // bool<br>
address=*Некий_aдрес_функции*;<br>
IF = address * term; // Некий aдрес функции<br>
IF(); // Исполнится.<br>


пример IF и ELSE в псевдо-коде:<br>

term = 1; // bool<br>
AddressIF=*некий_адрес_функции_для_IF*;<br>
AddressELSE=*некий_адрес_функции_для_ELSE*;<br>
IF = AddressIF * term; // Некий ядресс функции для IF<br>
ELSE = AddressELSE * NOT term; // 0<br>
// нельзя так: "ELSE = NOT IF;". Потому что если IF = 0, то ELSE станет равен 1.<br>
IF(); // Исполнится.<br>
ELSE(); // Не исполнится.<br>


пример NOT в псевдо-коде:<br>
term = 1; // bool<br>
term = abs(term -1); // |1 - 1| = 0<br>
