import csv

with open("favourites.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        fav = row["name"]
        print(fav)