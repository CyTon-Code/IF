# Блоки IF и ELSE
Описание работы IF и ELSE.

Хочу также сказать что я молодой программист и могу ошибаться в своих доводах(то что тут вы прочитаете - это Теория).

У меня было несколько обьяснений работы IF-а. И я начну с более реальных(на мой взгляд) и эфективных до более фантастических (но более понятных мне).

# 1.
IF - это сочитание таких вещей: 1 адрес на исполняемый блок кода (возможно функции), Умножение (bool)term на адрес.

ELSE - это тот же IF но с использованием такой вещи: NOT (Обратное 1 --> 0  0 --> 1).


NOT - Важный оператор(для работы с bool), Возвращает 1 если 0 и если 0 то 1.<br>

# 2.
на старте у нас есть строка "", при прохождении дальше добавляем до нее символ str(term) в конец. Создаем перед каждым блоком строковые маркеры, при прохождении кода мы будем проверять кажды раз условия пары IF и ELSE и добавлять в конец строки бит результата, после каждого редактирования строки мы прыгаем к маркеру с такой же строкой как и у строки разумееться не очень разумная идея так как на каждый вложенный IF +1 символ веса к строке)


в языке который я хочу сделать строковые маркеры будут ключевыми вещами, по ним легко вести историю исполняемых команд и легко контролировать исполнение кода.
