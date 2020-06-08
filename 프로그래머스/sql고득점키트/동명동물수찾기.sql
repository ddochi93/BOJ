SELECT name, count(name) from ANIMAL_INS  group by NAME  having  count(name) >= 2;
