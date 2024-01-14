def tel_woorden(woorden):
    aantal_woorden = {woord: 0 for woord in set(woorden)}
    for woord in woorden:
        aantal_woorden[woord] += 1
    return aantal_woorden

