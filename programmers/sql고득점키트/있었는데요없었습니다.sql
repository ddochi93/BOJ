SELECT O.ANIMAL_ID, O.NAME
FROM ANIMAL_INS I inner join ANIMAL_OUTS O ON I.ANIMAL_ID = O.ANIMAL_ID
WHERE I.DATETIME > O.DATETIME
