def hms(seconden):
    aantal_uur = 0
    aantal_minuten = 0
    while seconden >= 3600:
        seconden -= 3600
        aantal_uur += 1
    while seconden >= 60:
        seconden -= 60
        aantal_minuten += 1

    return [aantal_uur, aantal_minuten, seconden]

