![example workflow](https://github.com/La-maker-lab24/Lab1/actions/workflows/test-action.yml/badge.svg)
[![Coverage Status](https://coveralls.io/repos/github/La-maker-lab24/Lab1/badge.svg?branch=master)](https://coveralls.io/github/La-maker-lab24/Lab1?branch=master)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=La-maker-lab24_Lab12&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=La-maker-lab24_Lab12)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=La-maker-lab24_Lab12&metric=bugs)](https://sonarcloud.io/summary/new_code?id=La-maker-lab24_Lab12)
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=La-maker-lab24_Lab12&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=La-maker-lab24_Lab12)

# План тестирования
Тест А1
- Тест проверяет: нулевой дискриминат
- Тип: позитивный
- Ввод: a=1, b=-2, c=1
- Ожидаемый результат: возврат 1 (1 корень)

Тест А2
- Тест проверяет: нет решений
- Тип: позитивный
- Ввод: a=1, b=-3, c=2
- Ожидаемый результат: возврат 0 (нет решений)

Тест А3
- Тест проверяет: ненулевой дискриминат (два корня)
- Тип: позитивный
- Ввод: a=1, b=-3, c=2
- Ожидаемый результат: возврат 1 (1 корень), корень равен 1

Тест А4
- Тест проверяет: бесконечное количество решений
- Тип: негативный
- Ввод: a=0, b=0, c=0
- Ожидаемый результат: возврат -1

Тест А5
- Тест проверяет: один корень с a=0
- Тип: позитивный
- Ввод: a=0, b=2, c=4
- Ожидаемый результат: возврат 1 (1 корень), корень равен -2

Тест А6
- Тест проверяет: с дробными коэффциентами 
- Тип: позитивный
- Ввод: a=0.5, b=-1.5, c=0.5
- Ожидаемый результат: возврат 2 (2 корня)
