int x;
switch (x)
{
    case 5: x++; break;
    case x>0: x--; break; // Ошибка: в case нельзя использовать выражения, только константы
    default: x+=66;
}

switch (x)
{
    case 5: x+=7; break;
    case 6: case 11: --x; break; // Ошибка: отсутствует default, хотя это не обязательно, но может быть логической ошибкой
}

switch (x)
{
    case 5: x*=16; // Ошибка: отсутствует break, что приведет к "проваливанию"
    case 6: case 11: x==23; break; // Ошибка: x==23 — это сравнение, а не присваивание
}

switch (5) // Ошибка: switch всегда будет выполняться для значения 5
{
    case 5: x+=7; break;
    case 6: case 11: --x; break;
}
