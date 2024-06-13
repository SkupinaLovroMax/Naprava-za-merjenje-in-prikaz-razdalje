# Naprava-za-merjenje-in-prikaz-razdalje
Naprava za merjenje in prikaz razdalje z uporabo Arduina uporablja ultrazvočni senzor za merjenje razdalje do objekta in LCD zaslon za prikaz te razdalje.

# KOSOVNICA:

|Uporabljen komponent|Št. kosov|
|---|---|
|Arduino UNO R3| 1 |
|Protoboard| 1 |
|LCD 16x2| 1 |
|Senzor HC-SR04| 1 |
|Potenciometer| 1 |
|Žice| 15 |

# VEZALNA SHEMA:

![image](https://github.com/SkupinaLovroMax/Naprava-za-merjenje-in-prikaz-razdalje/assets/171671907/4e21d32a-3137-408f-ab35-94876ba5b152)

# KOMENTAR:
Ocena natančnosti na 60cm:
Natančnost meritve distance: ∓ 3,5% cm.

Ocena natančnosti na 20cm:
Natančnost meritve distance: ∓ 2% cm.

Med izvajanjem vaje moramo paziti na morebitne motnje in ovire, ki lahko vplivajo na natančnost meritev. Različni materiali in površine lahko različno odbijajo zvočne valove, kar lahko povzroči odstopanja v meritvah. Pri naju na srečo ni bilo večjih odstopanj, zato sva zadovoljna z uspešno opravljeno nalogo. Ultrazvočni senzor zelo natančno natančno meri od 3cm pa vse do 315cm, za druge daljše ali krajše razdalje pa ga je potrebno kalibrirati. Če se pojavi težava z natančnstjo, je najpogostejši razlog slaba oz. nepravilna povezava.

# MOŽNE IZBOLJŠAVE:
Pri najinem izdelku bi lahko spremenila ohišje (izdelati bi ga morala s 3D printerjem), da bi bil estetsko še lepši kot je. Ultrazvočni senzor HC-SR04 je mogoče kalibrirati, da bi izboljšali natančnost meritev razdalje. Kalibracija lahko vključuje več korakov, kot so kompenzacija za temperaturne spremembe, preverjanje delovanja senzorja na znanih razdaljah in prilagoditev algoritma za izračun razdalje.
