# betting simulator

**argv**
```
1 number of money
2 luky
3 profitability (in percentage)
Optional :
    -FormatCsv
        NameFile.csv
```

**Resulte Exemple**

command : prog 20 20 150 -FormatCsv ExempleFile.csv

Result :
```
Tour : 1 | Money : 19 | bet : 1 | Win : False
Tour : 2 | Money : 17 | bet : 2 | Win : False
Tour : 3 | Money : 13 | bet : 4 | Win : False
Tour : 4 | Money : 29 | bet : 8 | Win : True
Tour : 5 | Money : 31 | bet : 1 | Win : True
Tour : 6 | Money : 30 | bet : 1 | Win : False
Tour : 7 | Money : 28 | bet : 2 | Win : False
Tour : 8 | Money : 24 | bet : 4 | Win : False
Tour : 9 | Money : 40 | bet : 8 | Win : True
Tour : 10 | Money : 39 | bet : 1 | Win : False
Tour : 11 | Money : 37 | bet : 2 | Win : False
Tour : 12 | Money : 33 | bet : 4 | Win : False
Tour : 13 | Money : 25 | bet : 8 | Win : False
Tour : 14 | Money : 9 | bet : 16 | Win : False
Tour : 15 | Money : 73 | bet : 32 | Win : True
Tour : 16 | Money : 75 | bet : 1 | Win : True
Tour : 17 | Money : 74 | bet : 1 | Win : False
Tour : 18 | Money : 72 | bet : 2 | Win : False
Tour : 19 | Money : 68 | bet : 4 | Win : False
Tour : 20 | Money : 84 | bet : 8 | Win : True
Tour : 21 | Money : 83 | bet : 1 | Win : False
Tour : 22 | Money : 81 | bet : 2 | Win : False
Tour : 23 | Money : 77 | bet : 4 | Win : False
Tour : 24 | Money : 69 | bet : 8 | Win : False
Tour : 25 | Money : 53 | bet : 16 | Win : False
Tour : 26 | Money : 21 | bet : 32 | Win : False
Tour : 27 | Money : -43 | bet : 64 | Win : False
FINISHED SIMULATION
Tour : 28 | MoneyMax : 84 | Win : 6 | Loose : 22 | percentage : 21
```
ExempleFile.csv in folder 'bin'